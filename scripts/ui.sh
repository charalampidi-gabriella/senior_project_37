title1="SimpleHTTPServer"
title2="ros bridge"
title3="chromium"
title4="web_video_server"

cmd1="sudo systemctl stop start_app_node.service; cd /home/jetauto/catkin_ws/src/robot_gui_bridge/gui; python -m SimpleHTTPServer"
cmd2="sleep 25; cd /home/jetauto/catkin_ws; roslaunch robot_gui_bridge websocket.launch"
#cmd3="sleep 30; chromium-browser http://localhost:8000/gui.html"
cmd4="sleep 35; rosrun web_video_server web_video_server"

gnome-terminal --tab --title="$title1" --command="bash -c '$cmd1; $SHELL'" \
               --tab --title="$title2" --command="bash -c '$cmd2; $SHELL'" \
               #--tab --title="$title3" --command="bash -c '$cmd3; $SHELL'" \
               --tab --title="$title4" --command="bash -c '$cmd4; $SHELL'" 
