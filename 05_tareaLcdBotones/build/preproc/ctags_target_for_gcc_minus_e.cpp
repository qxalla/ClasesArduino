# 1 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/05_tareaLcdBotones/tarea.ino"
# 2 "/Users/rodrigoquezadalastra/Desktop/clasesArduino/05_tareaLcdBotones/tarea.ino" 2
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
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
