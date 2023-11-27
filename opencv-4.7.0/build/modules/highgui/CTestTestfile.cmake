# CMake generated Testfile for 
# Source directory: /home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/modules/highgui
# Build directory: /home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/build/modules/highgui
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_highgui "/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/build/bin/opencv_test_highgui" "--gtest_output=xml:opencv_test_highgui.xml")
set_tests_properties(opencv_test_highgui PROPERTIES  LABELS "Main;opencv_highgui;Accuracy" WORKING_DIRECTORY "/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/cmake/OpenCVUtils.cmake;1752;add_test;/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/cmake/OpenCVModule.cmake;1352;ocv_add_test_from_target;/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/modules/highgui/CMakeLists.txt;318;ocv_add_accuracy_tests;/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/modules/highgui/CMakeLists.txt;0;")
