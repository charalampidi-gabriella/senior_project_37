<h1>RoomSense Robot</h1>
<h2>Department of Computer Science and Engineering <br \>
University of Nevada, Reno</h2><br  \>
Team #37<br \>
Team members: Gabriella Charalampidi, Emily McCue, James Kolby<br \>
Instructors: Sara Davis, Devrin Lee, Vinh Le<br \>
Team Advisor: Christos Papachristos, Assistant Professor

<h2>Emily's "catkin_ws":</h2>
<h3>New Terminal 1:</h3>
source ~/.bashrc<br \>
cd ~/catkin_ws/src<br \>
export TURTLEBOT3_MODEL=waffle_pi<br \>
roslaunch turtlebot3_gazebo turtlebot3_house.launch
<h3>New Terminal 2:</h3>
export TURTLEBOT3_MODEL=waffle_pi<br \>
roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch<br \>
