#!/bin/bash
source /opt/ros/melodic/setup.bash
source /home/jetauto/catkin_ws/devel/setup.bash

cd /home/jetauto/Desktop;
./object_recognition.sh;
sleep 20; ./ui.sh

:'
#!/bin/bash
title1="tab 1"
title2="tab 2"
title3="tab 3"
title4="tab 4"

cmd1="sudo systemctl stop start_app_node.service"
#cmd2="cd; cd Desktop"
cmd3="sleep 3; cd /home/jetauto/Desktop; sh ./object_recognition.sh"
cmd4="sleep 20; cd /home/jetauto/Desktop; sh ./ui.sh"

gnome-terminal --tab --title="$title1" --command="bash -c '$cmd1; $SHELL'" \
               #--tab --title="$title2" --command="bash -c '$cmd2; $SHELL'" \
               --tab --title="$title3" --command="bash -c '$cmd3; $SHELL'" \
               --tab --title="$title4" --command="bash -c '$cmd4; $SHELL'"
'
