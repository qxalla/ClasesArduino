/*
Author: Rodrigo Quezada L.
Descripcion: codigo para hacer parpadear tres led como un semaforo con arduino
*/
const int led1=2; //led verde
const int led2=3; //led amarillo
const int led3=4; //led rojo

void setup()
{
	pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
}

void loop()
{
	for(int x=2;x<=4;x++){
        digitalWrite(x,HIGH); // enciendo el led
        delay(500);
        digitalWrite(x,LOW); // apago el led
        delay(500);
    }
}
