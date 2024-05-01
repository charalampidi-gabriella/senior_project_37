title1="tab 1"
title2="tab 2"
title3="tab 3"

cmd1="sudo systemctl stop start_app_node.service; roscore"
cmd2="sleep 12; roslaunch jetauto_navigation navigation.launch map:='map_global_01'"
cmd3="sleep 17; roslaunch jetauto_navigation rviz_navigation.launch"

gnome-terminal --tab --title="$title1" --command="bash -c '$cmd1; $SHELL'" \
               --tab --title="$title2" --command="bash -c '$cmd2; $SHELL'" \
               --tab --title="$title3" --command="bash -c '$cmd3; $SHELL'" 
