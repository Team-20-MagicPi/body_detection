cmake_minimum_required(VERSION 3.9)
project(main)

set(CMake_CXX_STANDARD 11)
include_directories(include)

find_package(wiringPi REQUIRED)


include_directories(${WIRINGPI_INCLUDE_DIRS})


add_executable(main  main.cpp body_detect.cpp)
target_link_libraries(main ${WIRINGPI_LIBRARIES})




