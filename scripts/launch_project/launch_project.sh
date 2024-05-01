#!/bin/bash
source /opt/ros/melodic/setup.bash
source /home/jetauto/catkin_ws/devel/setup.bash

cd /home/jetauto/Desktop;
./object_recognition.sh;
sleep 20; ./ui.sh

