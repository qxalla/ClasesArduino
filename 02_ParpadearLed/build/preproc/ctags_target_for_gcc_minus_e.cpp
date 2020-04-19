# 1 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\02_ParpadearLed\\parpadearLed.ino"
/*

Author: Rodrigo Quezada L.

Descripcion: codigo para hacer parpader un led con arduino

*/
# 5 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\02_ParpadearLed\\parpadearLed.ino"
// puerto del led que vamos a ocupar
const int led1=2;
void setup()
{
    //especificacion de salida
 pinMode(led1, 0x1);
}

void loop()
{
 digitalWrite(led1, 0x1); // enciendo el led
    delay(500); // medio segundo de espera
    digitalWrite(led1,0x0); // apago el led
    delay(500); //medio segundo de espera
}
