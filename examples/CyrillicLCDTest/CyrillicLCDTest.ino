#include <RobotClass_LiquidCrystal.h>

RobotClass_LiquidCrystal lcd(4, 5, 6, 7, 8, 9);

void setup() {
  lcd.begin( 16, 2 );

  lcd.setCursor(0,0);
  lcd.print( "Привет!" );
  lcd.setCursor(0,1);
  lcd.print( "мир" );
}

void loop() {
}
