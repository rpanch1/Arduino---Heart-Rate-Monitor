
#include <LiquidCrystal.h>
int state = 0;

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  Serial.begin(38400); // Default communication rate of the Bluetooth module
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
}
void loop() {
 if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.parseInt(); // Reads the data from the serial port
 }
 //lcd.clear();
 lcd.setCursor(0,0);
 lcd.clear();
 
 if(state == 0){
  lcd.print("  Place finger");
  lcd.setCursor(0,1);
  lcd.print("   on sensor");
 }
 else{
 lcd.print("AVG BPM: ");
 lcd.print(state);
 //lcd.setCursor(0,10);
 Serial.print(state);
 Serial.println();
 }
 delay(10);
}
