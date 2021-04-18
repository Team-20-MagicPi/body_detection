#include "stdlib.h"
#include "stdio.h"
#include "wiringPi.h"
#include "body_detect.h"
#include "unistd.h"

#define Infrared 24 //the wiringPi gpio pin number for the Infrared sensor

void SensorSetup() //Setup the Infrared sensor with the wiringPi
{
	wiringPiSetup();
	pinMode(Infrared, INPUT);
}

void body_detect::human_detection() //public class which contains human_detection function
{
	bool tmp=true;
	float wait_time=0;
	SensorSetup();
	//Realtime detecting the human body by its infrared lights reflection
	while(1)
	{
		sleep(0.1);
		if(digitalRead(Infrared)==1&&tmp==false)
		{
			system("xset dpms force on"); //turn on the screen
		}
		else if (tmp==true&&wait_time>=5)
		{
			system("xset dpms force off");//turn off the display
			wait_time=0;
			tmp=false;
		}
		else wait_time+=0.1;
		
	}
}
