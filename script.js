function speakWelcomeMessage() {
	      //  initialize speech synthesis
	      function initializeSpeech() {
		  var voices = window.speechSynthesis.getVoices();
	  
		  //  no voices are loaded, wait for them to load
		  if (voices.length === 0) {
		      window.setTimeout(() => {
		          voices = window.speechSynthesis.getVoices();
		          speak(voices);
		      }, 100);
		  } else {
		      speak(voices);
		  }
	      }
	  
	      // speak the welcome message
	      function speak(voices) {
		  if (voices.length > 0) {
		      var utterance = new SpeechSynthesisUtterance('Welcome to RoomSense. Please click the start button to initiate the process.');
		      utterance.voice = voices.find(voice => voice.name === "Google US English") || voices[0];
		      utterance.pitch = 1; // Normal pitch
		      utterance.rate = 1; 
		      window.speechSynthesis.speak(utterance);
		  } else {
		      window.setTimeout(initializeSpeech, 250);
		  }
	      }
	  
	      initializeSpeech();
	  }
	  
	  //  ensure the page is fully loaded
	  window.addEventListener('load', speakWelcomeMessage);

		var recentIDs = [];
		var searching = false;
		var threshold = 0.10;

		function parseIDs() {
			cleanIDs = [];
			for (i=0; i<recentIDs.length; i++) {
				cleanIDs.push(recentIDs[i][0]);
			}

			return cleanIDs;
		}

		// ros status listener
		var ros = new ROSLIB.Ros({
		url: 'ws://localhost:9090'
		});

		// logs all available ros topics
		function getTopics() {
		    var topicsClient = new ROSLIB.Service({
		    ros : ros,
		    name : '/rosapi/topics',
		    serviceType : 'rosapi/Topics'
		    //serviceType : 'rosapi/TopicType'
		    });

		    var request = new ROSLIB.ServiceRequest();
		    //var request = new ROSLIB.ServiceRequest({topic: '/darknet_ros/bounding_boxes'});

		    topicsClient.callService(request, function(result) {
		    console.log("Getting topics...");
		    console.log(result.topics);
		    console.log('Topic Types: ', result.types); //topic types 
		    });
		};

		ros.on('error', function (error) {
			// document.getElementById("status").innerHTML = "Error";
		});

		ros.on('connection', function () {
			// document.getElementById("status").innerHTML = "Connected";
			console.log('successfully connected to websocket server');
		});

		ros.on('close', function () {
			// document.getElementById("status").innerHTML = "Closed";
		});


		// search status listener
		var search_listener = new ROSLIB.Topic({
			ros : ros,
			name : '/search_msg',
			messageType : 'std_msgs/String'
		});

		search_listener.subscribe(function(m) {
			document.getElementById("search_status").innerHTML = m.data;
		});


		// identifications listener
		var items_listener = new ROSLIB.Topic({
			ros : ros,
			name : '/darknet_ros/bounding_boxes',
			messageType : 'darknet_ros_msgs/BoundingBoxes'
		});

		function handle_detections (message) {
			if (searching) {
				//console.log(typeof message.data);
				//console.log(message);
				if (message.bounding_boxes[0].probability > threshold) {  // the threshold variable percentage for detection confidence
					obj_class = message.bounding_boxes[0].Class;
					timestamp = message.header.stamp.secs;  // time image was taken in seconds; note I might change secs to nsecs for nanoseconds I think

					// if we have 0 detections already, save the current detection without doing extra logic to prevent duplicates
					if (recentIDs.length == 0) {
						recentIDs.push([" " + obj_class, timestamp]);
						console.log("pushed back", recentIDs[recentIDs.length-1], "no timediff, because this is the first detection logged");
					} else {

						// check if the time the last object saved was recent or not in order to prevent duplicates
						// pushing back new items by default; they get removed along with any sneaky async items below
						recentIDs.push([" " + obj_class, timestamp]);
						//console.log("pushed back", recentIDs[recentIDs.length-1], "with timediff=", timediff);
						// checking all items in the array already, because roslibjs has async issues, and I haven't thought of a better way to prevent it yet
						for (j=1; j<recentIDs.length-1; j++) {
							
							timediff = 0;
							timestamp = recentIDs[j][1];
/*
							if (j <= 5) {
								maxlen = j
							} else {
								maxlen = 5;
							}*/
							//console.log("maxlen:", maxlen);

							for (i=j; i>0; i--) {
								//console.log(recentIDs.length-i, ",", i, ":  ", recentIDs[recentIDs.length-i]);
								lastIDtime = recentIDs[j-i][1];
								timediff = timestamp-lastIDtime;  // time between current image and last image above the threshold
								//console.log("timediff:", timediff);

								if (timediff < 4  && recentIDs[i][0] == recentIDs[j-i][0]) { // save new detection if it's not too new
									recentIDs.splice(j-i, 1);  // remove the item below the threshold from the array
									console.log(recentIDs);
								}
							}
						}
					}
				}

				document.getElementById("items_msg").innerHTML = recentIDs;
				//items_listener.unsubscribe(handle_detections);
			}
		}

		items_listener.subscribe(handle_detections);


		// troubleshooting listener
		var listener = new ROSLIB.Topic({
			ros : ros,
			name : '/listener',
			messageType : 'std_msgs/String'
		});

		listener.subscribe(function(message) {
		  	console.log('Received message on ' + listener.name + ': ' + message.data);
			img = document.getElementById("txt_msg").innerHTML = message.data;
			listener.unsubscribe();
		});



		// Publishers
		// search button publisher
		var search_cmd_publisher = new ROSLIB.Topic({
			ros : ros,
			name : 'move_base_simple/goal',
			messageType : 'geometry_msgs/PoseStamped'
		});

		start_search = function() {
			var search = new ROSLIB.Message({
				// todo add proper message to start search
			});
			search_cmd_publisher.publish(search);
		}

		search_cmd_publisher.subscribe(function(m) {
			document.getElementById("search_button").innerHTML = m.data;
			move(1, 0);
		});


		// reset variables for new search
		function startSearch() {
			if (!searching) {
				//recentIDs.length = 0;
				searching = true;
				console.log("starting search");
				items_listener.subscribe(handle_detections);
			}

			// publish 2d_pose_estimate
			var initial_pose = new ROSLIB.Topic({
				ros: ros,
				name : '/jetauto_1/initialpose',
				messageType : 'geometry_msgs/PoseWithCovarianceStamped'
			});

			the_2d_pose_estimate = new ROSLIB.Message({  // note js variables can't start with numbers
				pose : {
					pose : {
						position : {
							x : 1.49036717415,
							y : -0.135875985026,
							z : 0.0
						},
						orientation : {
							x : 0.0,
							y : 0.0,
							z : -0.909089241609,
							w : 0.416601429175
						}
					},
				covariance : [0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.25, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.06853892326654787]
				}
			});

			console.log(the_2d_pose_estimate);
			initial_pose.publish(the_2d_pose_estimate);


			// publish all the points as well
			var navigation_points_topic = new ROSLIB.Topic({
				ros: ros,
				name : '/jetauto_1/clicked_point',
				messageType : 'geometry_msgs/PointStamped'
			});

			point0 = new ROSLIB.Message({
				point : {
					x : -1.32744562626,
					y : -1.08546102047,
					z : 0.0
				}
			});

			point1 = new ROSLIB.Message({
				point : {
					x : -0.826085746288,
					y : 0.845190703869,
					z : 0.0
				}
			});

			point2 = new ROSLIB.Message({
				point : {
					x : -0.0930778831244,
					y : 1.35695457458,
					z : 0.0
				}
			});

			point3 = new ROSLIB.Message({
				point : {
					x : 0.628813326359,
					y : -0.966171085835,
					z : 0.0
				}
			});
/*
			navigation_points_topic.publish(point0);
			navigation_points_topic.publish(point1);
			navigation_points_topic.publish(point2);
			navigation_points_topic.publish(point3); */

			// send the a message to start exploring the room
			var explore_topic = new ROSLIB.Topic({
				ros: ros,
				name : '/explore',
				messageType : 'std_msgs/String'
			});

			exp_bool = new ROSLIB.Message({data : "true"});
			explore_topic.publish(exp_bool);
		};


		// clear the list of identified items
		function clearItems() {
			recentIDs.length = 0;
			document.getElementById("items_msg").innerHTML = recentIDs;
		};

		// Immediately hault everything
		function stop() {
			// stop navigation
			// stop receiving new object identifications
			searching = false;
			items_listener.unsubscribe(handle_detections);

			// one last check to remove duplicates
			for (j=1; j<recentIDs.length-1; j++) {			
				timediff = 0;
				timestamp = recentIDs[j][1];

				for (i=j; i>0; i--) {
					//console.log(recentIDs.length-i, ",", i, ":  ", recentIDs[recentIDs.length-i]);
					lastIDtime = recentIDs[j-i][1];
					timediff = timestamp-lastIDtime;  // time between current image and last image above the threshold
					//console.log("timediff:", timediff);

					if (timediff < 4  && recentIDs[i][0] == recentIDs[j-i][0]) { // save new detection if it's not too new
						recentIDs.splice(j-i, 1);  // remove the item below the threshold from the array
						console.log(recentIDs);
					}
				}
			}
			

			var explore_topic = new ROSLIB.Topic({
				ros: ros,
				name : '/explore',
				messageType : 'std_msgs/String'
			});

			exp_bool = new ROSLIB.Message({data : "false"});
			explore_topic.publish(exp_bool);

			document.getElementById("items_msg").innerHTML = parseIDs();
			console.log("search stopped");
		};
