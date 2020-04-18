# 1 "c:\\Users\\rodri\\Desktop\\SmartCity\\prenderLed.ino"

// puerto del led que vamos a ocupar
const int led1 = 2;

void setup()
{
 // especificacion de salida
    pinMode(led1, 0x1);
}

void loop()
{
 digitalWrite(led1, 0x1);
}
