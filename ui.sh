title1="tab 1"
title2="tab 2"
title3="tab 3"

cmd1="sudo systemctl stop start_app_node.service; cd /home/jetauto/catkin_ws/src/robot_gui_bridge/gui; python -m SimpleHTTPServer"
cmd2="sleep 5; cd /home/jetauto/catkin_ws; roslaunch robot_gui_bridge websocket.launch"
cmd3="sleep 10; chromium-browser http://localhost:8000/gui.html"

gnome-terminal --tab --title="$title1" --command="bash -c '$cmd1; $SHELL'" \
               --tab --title="$title2" --command="bash -c '$cmd2; $SHELL'" \
               --tab --title="$title3" --command="bash -c '$cmd3; $SHELL'" 
