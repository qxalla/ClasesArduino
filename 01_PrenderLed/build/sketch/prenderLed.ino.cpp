#include <Arduino.h>
#line 1 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\01_PrenderLed\\prenderLed\\prenderLed.ino"

/*
Author: Rodrigo Quezada L.
Descripcion: codigo para encender un led en arduino
*/
// puerto del led que vamos a ocupar
const int led1 = 2;

#line 9 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\01_PrenderLed\\prenderLed\\prenderLed.ino"
void setup();
#line 15 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\01_PrenderLed\\prenderLed\\prenderLed.ino"
void loop();
#line 9 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\01_PrenderLed\\prenderLed\\prenderLed.ino"
void setup()
{
	// especificacion de salida
    pinMode(2, OUTPUT);
}

void loop()
{
	digitalWrite(2, HIGH);
}

