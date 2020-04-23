
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 10, 5, 4, 3, 2);
/*
Author: Rodrigo Quezada L.
Descripcion: pantalla led con dos botones que cambian el mensaje
*/

void setup(){
    lcd.begin(16,2);

}

void loop(){
    lcd.setCursor(0,0);
    lcd.print("hola mundo");
}