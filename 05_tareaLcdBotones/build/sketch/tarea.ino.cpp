#include <Arduino.h>
#line 1 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/05_tareaLcdBotones/tarea.ino"
#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
/*
Author: Rodrigo Quezada L.
Descripcion: pantalla led con dos botones que cambian el mensaje
*/

#line 8 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/05_tareaLcdBotones/tarea.ino"
void setup();
#line 13 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/05_tareaLcdBotones/tarea.ino"
void loop();
#line 8 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/05_tareaLcdBotones/tarea.ino"
void setup(){
    lcd.begin(16,2);

}

void loop(){
    lcd.setCursor(0,0);
    lcd.print("hola mundo");
}
