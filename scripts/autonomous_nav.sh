title1="tab 1"
title2="tab 2"
title3="tab 3"
title4="tab 4"

cmd1="sudo systemctl stop start_app_node.service;"
cmd2="sleep 10; roslaunch jetauto_navigation navigation.launch map:=auto_map_03"
cmd3="sleep 15; roslaunch jetauto_navigation rviz_navigation.launch"
cmd4="sleep 15; roslaunch jetauto_navigation publish_point.launch"

gnome-terminal --tab --title="$title1" --command="bash -c '$cmd1; $SHELL'" \
               --tab --title="$title2" --command="bash -c '$cmd2; $SHELL'" \
               --tab --title="$title3" --command="bash -c '$cmd3; $SHELL'" \
               --tab --title="$title4" --command="bash -c '$cmd4; $SHELL'"
