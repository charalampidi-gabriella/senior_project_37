# CMake generated Testfile for 
# Source directory: /home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/modules/flann
# Build directory: /home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/build/modules/flann
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_flann "/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/build/bin/opencv_test_flann" "--gtest_output=xml:opencv_test_flann.xml")
set_tests_properties(opencv_test_flann PROPERTIES  LABELS "Main;opencv_flann;Accuracy" WORKING_DIRECTORY "/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/build/test-reports/accuracy" _BACKTRACE_TRIPLES "/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/cmake/OpenCVUtils.cmake;1752;add_test;/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/cmake/OpenCVModule.cmake;1352;ocv_add_test_from_target;/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/cmake/OpenCVModule.cmake;1110;ocv_add_accuracy_tests;/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/modules/flann/CMakeLists.txt;2;ocv_define_module;/home/jimmy/Documents/UNR/project/senior_project_37/opencv-4.7.0/modules/flann/CMakeLists.txt;0;")
