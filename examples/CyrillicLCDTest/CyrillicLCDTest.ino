#include <RobotClass_LiquidCrystal.h>

RobotClass_LiquidCrystal lcd(4, 5, 6, 7, 8, 9, CP_UTF8);

byte idx = 0;

void setup() {
  lcd.begin( 16, 2 );
  
}

void loop() {
  lcd.setCursor(0,0);
  lcd.print( "АБВГДЕЁЖЗИКЛМНОП" );
  lcd.setCursor(0,1);
  lcd.print( "абвгдеёжзиклмноп" );
  delay(1000);

  lcd.setCursor(0,0);
  lcd.print( "РСТУФХЦЧШЩЪЫЬЭЮЯ" );
  lcd.setCursor(0,1);
  lcd.print( "рстуфхцчшщъыьэюя" );
  delay(1000);
}
