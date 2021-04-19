# body_detection
In this programme we also use a infrared sensor to detect the body of the user standing in front of the magic mirror. And using it to control the screen on and off.

This repository includes:<br>
1.Cmake files and Cmakelists.<br>
2.One `.h` files.<br>
3.Two `.cpp` files including `detect_main.cpp` which is the main program.<br>
Cmakefiles may differ when they are applied to different systems or different devices.<br>

# Table of Content
  1.Program introduction<br>
  2.Installation of the basic library<br>
  3.Introduction to each file<br>
  4.Maintainer<br>

# Program introduction
An infrared sensor modified to body detect sensor can output a high voltage signal when somebody shows up in front of it, and output a low voltage signal when nobody’s around. However, it’s kind of sensitive to the environment light. <br>
In this program we connect the signal pin to port 19 of the Raspberry Pi.<br>
As a result, the program can turn on the screen when it successfully detects the user standing in front of the magicPi, and it can turn off the display when the user leaves the mirror.<br>
# Installation of the basic library
WiringPi is a PIN based GPIO access library written in C. It is pre-installed with the newest Rasbian OS, or you can install it using the link below:<br>
http://wiringpi.com/download-and-install/

# Introduction to each file 
1.In `body_detect.h` we define a body_detect class, it contains one public function:<br>
`human_detection()` : screen control function.<br>
2.In `body_detect.cpp` we define two functions:<br>
`SensorSetup()` : basic gpio initialization.<br>
`human_detection()` : screen control function.<br>
3.In `detect_main.cpp` we run the main program.<br>
# Maintainer
@[Touru97](https://github.com/Touru97)<br>
Discussion is welcome! Lots of things are here needed to be discussing with you guys!

