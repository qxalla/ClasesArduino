/*
Author: Rodrigo Quezada L.
Descripcion: codigo para hacer parpader un led con arduino
*/
// puerto del led que vamos a ocupar
const int led1=2;
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
