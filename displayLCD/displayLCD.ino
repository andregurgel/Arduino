#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C Display(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

void setup(){
Display.begin(16,2);
}

void loop(){
Display.setBacklight(HIGH);
Display.setCursor(0,0);
Display.print("Andre lindo");
Display.setCursor(4,1);
Display.print("10");
delay(2000);
Display.clear();
Display.setBacklight(LOW);
delay(2000);
}

