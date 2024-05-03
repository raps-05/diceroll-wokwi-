#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,10,9,8,7);
int randomnumber;
void setup(){
  lcd.begin(16,2);
  randomSeed(7);
pinMode(12,INPUT);
}
void loop(){
  lcd.setCursor(2,0);
  lcd.print("Dice value is:");
  int DICEROLL=digitalRead(12);
  if(DICEROLL==1)
  randomnumber=random(1,7);
  lcd.setCursor(6,1);
  lcd.print(randomnumber);
}