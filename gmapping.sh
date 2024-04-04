title1="tab 1"
title2="tab 2"
title3="tab 3"

cmd1="sudo systemctl stop start_app_node.service; roslaunch jetauto_slam slam.launch slam_methods:=gmapping"
cmd2="sleep 12; roslaunch jetauto_slam rviz_slam.launch slam_methods:=gmapping"
cmd3="sleep 17; roslaunch jetauto_peripherals teleop_key_control.launch"

gnome-terminal --tab --title="$title1" --command="bash -c '$cmd1; $SHELL'" \
               --tab --title="$title2" --command="bash -c '$cmd2; $SHELL'" \
               --tab --title="$title3" --command="bash -c '$cmd3; $SHELL'" 
