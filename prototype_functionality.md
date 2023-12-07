### TurtleBot3 Prototype

These instructions will guide you through running the TurtleBot3 prototype with autonomous navigation and mapping capabilities.

1. **Terminal 1: Set up the Environment**
   - Open a terminal and execute the following commands:

     ```bash
     # Source the ROS environment variables
     source ~/.bashrc

     # Change directory to your catkin workspace source folder
     cd ~/catkin_ws/src

     # Set the TurtleBot3 model to 'waffle_pi'
     export TURTLEBOT3_MODEL=waffle_pi

     # Launch the TurtleBot3 simulation in Gazebo with the house environment
     roslaunch turtlebot3_gazebo turtlebot3_house.launch
     ```

   This will launch the Gazebo simulation environment.

2. **Terminal 2: Launch Mapping and Localization**
   - Open a new terminal and execute the following commands:

     ```bash
     # Set the TurtleBot3 model to 'waffle_pi'
     export TURTLEBOT3_MODEL=waffle_pi

     # Launch the mapping and localization components using the Gmapping algorithm
     roslaunch turtlebot3_slam turtlebot3_slam.launch slam_methods:=gmapping
     ```

   This will start the mapping and localization components using the Gmapping algorithm.

3. **Terminal 3: Start Teleoperation**
   - To manually control the robot using the keyboard, open another terminal and execute:

     ```bash
     # Set the TurtleBot3 model to 'waffle_pi'
     export TURTLEBOT3_MODEL=waffle_pi

     # Launch the teleoperation node to control the robot with the keyboard
     roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch
     ```

   This allows to control the robot's movement with the keyboard.

