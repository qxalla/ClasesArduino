#include <Arduino.h>
#line 1 "c:\\Users\\rodri\\Desktop\\SmartCity\\prenderLed.ino"

// puerto del led que vamos a ocupar
const int led1 = 2;

#line 5 "c:\\Users\\rodri\\Desktop\\SmartCity\\prenderLed.ino"
void setup();
#line 11 "c:\\Users\\rodri\\Desktop\\SmartCity\\prenderLed.ino"
void loop();
#line 5 "c:\\Users\\rodri\\Desktop\\SmartCity\\prenderLed.ino"
void setup()
{
	// especificacion de salida
    pinMode(led1, OUTPUT);
}

void loop()
{
	digitalWrite(led1, HIGH);
}

