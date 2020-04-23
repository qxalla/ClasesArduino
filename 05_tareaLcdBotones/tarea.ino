
/*
Author: Rodrigo Quezada L.
Descripcion: pantalla led con dos botones que cambian el mensaje
*/
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2, but1=6, but2=7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
	lcd.begin(16, 2);
    pinMode(but1,INPUT_PULLUP); //boton 1
    pinMode(but2,INPUT_PULLUP); //boton 2
}

void loop()
{
    //leer estados de botones
    boolean boton1= digitalRead(but1);
    boolean boton2= digitalRead(but2);

    //mensaje por defecto
    lcd.setCursor(0, 0);
    lcd.write("Bienvenido:");

    

    if(!boton1){ //boton1 es presionado
       mensaje("Boton 1");
    } 

    if(!boton2){ //boton2 es presionado
        mensaje("Boton 2");
    } 
    
	
}

void mensaje(String mensaje){
    lcd.clear();
        lcd.setCursor(0, 0);
        lcd.write("Usted presiono:");
        lcd.setCursor(0, 1); // segunda linea
        lcd.write(mensaje);
       delay(500);
       lcd.clear();
}
