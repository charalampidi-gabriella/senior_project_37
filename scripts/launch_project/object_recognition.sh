title1="tab 1"
title2="tab 2"
title3="tab 3"

cmd1="sudo systemctl stop start_app_node.service; roscore"
cmd2="sleep 27; roslaunch jetauto_peripherals usb_cam.launch"
#cmd3="sleep 12; rosrun image_view image_view image:=/usb_cam/image_raw"
cmd3="sleep 32; cd /home/jetauto/catkin_ws/src/darknet_ros/darknet_ros; roslaunch darknet_ros darknet_ros.launch"

gnome-terminal --tab --title="$title1" --command="bash -c '$cmd1; $SHELL'" \
               --tab --title="$title2" --command="bash -c '$cmd2; $SHELL'" \
               --tab --title="$title3" --command="bash -c '$cmd3; $SHELL'" 
