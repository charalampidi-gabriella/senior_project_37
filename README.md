# RoomSense Robot

**Department of Computer Science and Engineering**
**University of Nevada, Reno**

**Team #37**
- Team members: Gabriella Charalampidi, Emily McCue, James Kolby
- Instructors: Sara Davis, Devrin Lee, Vinh Le
- Team Advisor: Christos Papachristos, Assistant Professor

## Fall Semester Demo Videos

- **WASD Navigation Demo:** [Watch Video](https://youtu.be/aKd7RaaQccc)
- **Autonomous Navigation Demo:** [Watch Video](https://youtu.be/T0JaqantIKE)

## T37_ws

### Prerequisites:

- Must be running Ubuntu 20.04
- Download ROS1 Noetic software ([Installation Guide](http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment))
- Have the proper workspace built and dependencies included

### Fall Semester Final Project

- Start the launch file on the Hiwonder Jetauto Pro ROS Robot

## Spring Semester Demo Videos

- **Final Video Demo:** [Watch Video](https://www.youtube.com/watch?v=4dVwciwLvZg)

## catkin_ws

### Prerequisites:

- Must be running Ubuntu 20.04
- Download ROS1 Noetic software ([Installation Guide](http://wiki.ros.org/ROS/Tutorials/InstallingandConfiguringROSEnvironment))
- Have Gazebo installed and initialized


### Spring Semester TurtleBot3 Gazebo Prototype


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

