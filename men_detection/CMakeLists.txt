cmake_minimum_required(VERSION 3.9)
project(detect_main)

set(CMake_CXX_STANDARD 11)
include_directories(include)

find_package(wiringPi REQUIRED)


include_directories(${WIRINGPI_INCLUDE_DIRS})


add_executable(detect_main  detect_main.cpp body_detect.cpp)
target_link_libraries(detect_main ${WIRINGPI_LIBRARIES})




