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

3. **Terminal 3: Start Teleoperation (Optional)**
   - If you want to manually control the robot using the keyboard, open another terminal and execute the following commands:

     ```bash
     # Set the TurtleBot3 model to 'waffle_pi'
     export TURTLEBOT3_MODEL=waffle_pi

     # Launch the teleoperation node to control the robot with the keyboard
     roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch
     ```

   This allows you to control the robot's movement with the keyboard.

Now your TurtleBot3 prototype is set up for autonomous navigation and mapping. You can interact with it using the provided commands and interfaces.

**Note:** Please ensure that your system is properly configured, and the required ROS packages and dependencies are installed before running these commands.

Feel free to customize and share these instructions on GitHub as needed for your project.
