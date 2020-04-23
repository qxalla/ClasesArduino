

/*
Author: Rodrigo Quezada L.
Descripcion: prende y apaga un led con un boton pulsante
*/

void setup(){
    pinMode(2,OUTPUT); //led
    pinMode(3,INPUT_PULLUP); // boton pulsante con resistencia interna

}

void loop(){
    int lectura= digitalRead(3);

    switch(lectura) 
    {
        case 0: //boton pulsado
        digitalWrite(2,HIGH); //prende el led
        break;
        case 1: //boton apagado
        digitalWrite(2,LOW); //apaga el led
        break;
    }
}