# 1 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\01_PrenderLed\\prenderLed\\prenderLed.ino"

/*

Author: Rodrigo Quezada L.

Descripcion: codigo para encender un led en arduino

*/
# 6 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\01_PrenderLed\\prenderLed\\prenderLed.ino"
// puerto del led que vamos a ocupar
const int led1 = 2;

void setup()
{
 // especificacion de salida
    pinMode(2, 0x1);
}

void loop()
{
 digitalWrite(2, 0x1);
}
