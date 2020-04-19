# 1 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\03_SemaforoTresLed\\semaforoTresLEd.ino"
/*

Author: Rodrigo Quezada L.

Descripcion: codigo para hacer parpadear tres led como un semaforo con arduino

*/
# 5 "c:\\Users\\rodri\\Desktop\\SmartCity\\ClasesArduino\\03_SemaforoTresLed\\semaforoTresLEd.ino"
const int led1=2; //led verde
const int led2=3; //led amarillo
const int led3=4; //led rojo

void setup()
{
 pinMode(led1, 0x1);
    pinMode(led2, 0x1);
    pinMode(led3, 0x1);
}

void loop()
{
 for(int x=2;x<=4;x++){
        digitalWrite(x,0x1); // enciendo el led
        delay(500);
        digitalWrite(x,0x0); // apago el led
        delay(500);
    }
}
