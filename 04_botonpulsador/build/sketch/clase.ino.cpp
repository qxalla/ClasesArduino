#include <Arduino.h>
#line 1 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/04_/clase.ino"


/*
Author: Rodrigo Quezada L.
Descripcion: prende y apaga un led con un boton pulsante
*/

#line 8 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/04_/clase.ino"
void setup();
#line 14 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/04_/clase.ino"
void loop();
#line 8 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/04_/clase.ino"
void setup(){
    pinMode(2,OUTPUT); //led
    pinMode(3,INPUT_PULLUP); // boton pulsante con resistencia interna

}

void loop(){
    int lectura= digitalRead(3);

    switch(lectura) 
    {
        case 0:
        digitalWrite(2,HIGH);
        break;
        case 1:
        digitalWrite(2,LOW);
        break;
    }
}
