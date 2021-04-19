# body_detection
In this programme we also use a infrared sensor to detect the body of the user standing in front of the magic mirror. And using it to control the screen on and off.

This repository includes:
1.Cmake files and Cmakelists.
2.One .h files.
3.Two cpp files including detect_main.cpp which is the main program.
Cmakefiles may differ when they are applied to different systems or different devices.

# Table of Content
  1.Program introduction
  2.Installation of the basic library
  3.Introduction to each file
  4.Maintainer

# Program introduction
An infrared sensor modified to body detect sensor can output a high voltage signal when somebody shows up in front of it, and output a low voltage signal when nobody’s around. However, it’s kind of sensitive to the environment light. 
In this program we connect the signal pin to port 19 of the Raspberry Pi.
As a result, the program can turn on the screen when it successfully detects the user standing in front of the magicPi, and it can turn off the display when the user leaves the mirror.
# Installation of the basic library
WiringPi is a PIN based GPIO access library written in C. It is pre-installed with the newest Rasbian OS, or you can install it using the link below:
http://wiringpi.com/download-and-install/

# Introduction to each file 
1.In body_detect.h we define a body_detect class, it contains one public function:
human_detection() : screen control function.
2.In body_detect.cpp we define two functions:
SensorSetup() : basic gpio initialization.
human_detection() : screen control function.
3.In detect_main.cpp we run the main program.
#Maintainer
@Touru97
Discussion is welcome! Lots of things are here needed to be discussing with you guys!

