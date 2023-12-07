<h1>RoomSense Robot</h1>
<h2>Department of Computer Science and Engineering <br \>
University of Nevada, Reno</h2><br  \>
Team #37<br \>
Team members: Gabriella Charalampidi, Emily McCue, James Kolby<br \>
Instructors: Sara Davis, Devrin Lee, Vinh Le<br \>
Team Advisor: Christos Papachristos, Assistant Professor

<h2>Demo Videos</h2>
WASD Navigation Demo:<br \>
https://youtu.be/aKd7RaaQccc<br \>
Autonomous Navigation Demo:<br \>
https://youtu.be/T0JaqantIKE<br \>

<h2>Emily's "catkin_ws":</h2>
<h3>Prerequisites:</h3>
- Must be running Ubuntu 20.04<br \>
- Download ROS1 Noetic software (http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment)<br \>
- Download Gazebo software (https://classic.gazebosim.org/tutorials?cat=guided_b&tut=guided_b1)<br \>

### TurtleBot3 Prototype


1. **Terminal 1: Set up the Environment**

     ```bash
     # Source the ROS environment variables
     source ~/.bashrc

     # Change directory to catkin workspace source folder
     cd ~/catkin_ws/src

     # Set TurtleBot3 model to 'waffle_pi'
     export TURTLEBOT3_MODEL=waffle_pi

     # Launch TurtleBot3 simulation in Gazebo with the house environment
     roslaunch turtlebot3_gazebo turtlebot3_house.launch
     ```

   This will launch the Gazebo simulation environment.

2. **Terminal 2: Launch Mapping and Localization**

     ```bash
     # Set TurtleBot3 model to 'waffle_pi'
     export TURTLEBOT3_MODEL=waffle_pi

     # Launch mapping and localization components using the Gmapping algorithm
     roslaunch turtlebot3_slam turtlebot3_slam.launch slam_methods:=gmapping
     ```

   This will start the mapping and localization components using Gmapping.

3. **Terminal 3: Start Teleoperation**

     ```bash
     # Set TurtleBot3 model to 'waffle_pi'
     export TURTLEBOT3_MODEL=waffle_pi

     # Launch teleoperation node to control the robot with the keyboard
     roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch
     ```

   This allows to control the robot's movement with the keyboard.

