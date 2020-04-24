#include <Arduino.h>
#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2, but1=6, but2=7;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
	lcd.begin(16, 2);
  pinMode(but1,INPUT_PULLUP); //boton 1
  pinMode(but2,INPUT_PULLUP); //boton 2
}

void mensaje(const String mensaje){
    lcd.clear(); // limpia lcd
    lcd.setCursor(0, 0); // fija linea uno
    lcd.print("Usted presiono:");
    lcd.setCursor(0, 1); // fija linea dos
    lcd.print(mensaje);
    delay(500); // espera medio segundo
    lcd.clear(); // limpiar lcd
}

void loop()
{
    //mensaje por defecto
    lcd.setCursor(0, 0);
    lcd.write("Bienvenido:");

    if(!digitalRead(but1)){ //boton1 es presionado
       mensaje("Boton 1");
    } else if(!digitalRead(but2)){ //boton2 es presionado
        mensaje("Boton 2");
    } 
}

