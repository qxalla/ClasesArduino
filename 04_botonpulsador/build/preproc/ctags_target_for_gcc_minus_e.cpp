# 1 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/04_/clase.ino"


/*
Author: Rodrigo Quezada L.
Descripcion: prende y apaga un led con un boton pulsante
*/

void setup(){
    pinMode(2,0x1); //led
    pinMode(3,0x2); // boton pulsante con resistencia interna

}

void loop(){
    int lectura= digitalRead(3);

    switch(lectura)
    {
        case 0:
        digitalWrite(2,0x1);
        break;
        case 1:
        digitalWrite(2,0x0);
        break;
    }
}
