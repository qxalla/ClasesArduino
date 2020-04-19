
/*
Author: Rodrigo Quezada L.
Descripcion: codigo para encender un led en arduino
*/
// puerto del led que vamos a ocupar
const int led1 = 2;

void setup()
{
	// especificacion de salida
    pinMode(2, OUTPUT);
}

void loop()
{
	digitalWrite(2, HIGH);
}
