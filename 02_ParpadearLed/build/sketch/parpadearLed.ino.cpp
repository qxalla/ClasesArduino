#include <Arduino.h>
#line 1 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\02_ParpadearLed\\parpadearLed.ino"
/*
Author: Rodrigo Quezada L.
Descripcion: codigo para hacer parpader un led con arduino
*/
// puerto del led que vamos a ocupar
const int led1=2;
#line 7 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\02_ParpadearLed\\parpadearLed.ino"
void setup();
#line 13 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\02_ParpadearLed\\parpadearLed.ino"
void loop();
#line 7 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\02_ParpadearLed\\parpadearLed.ino"
void setup()
{
    //especificacion de salida
	pinMode(led1, OUTPUT);
}

void loop()
{
	digitalWrite(led1, HIGH); // enciendo el led
    delay(500); // medio segundo de espera
    digitalWrite(led1,LOW); // apago el led
    delay(500); //medio segundo de espera
}

