#include <LiquidCrystal_I2C.h>
#include <dht.h>
#include <Wire.h>

#define sensor 2

LiquidCrystal_I2C Display(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
LiquidCrystal_I2C Display2(0x3F, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
dht sensorDHT;
int temp = 0;
int umid = 0;

void setup(){
Serial.begin(9600);
Display.begin(16,2);
Display.begin(16,2);
}

void loop(){
sensorDHT.read11(sensor);

temp = sensorDHT.temperature;
umid = sensorDHT.humidity;

Display.setBacklight(HIGH);
Display.setCursor(0,0);
Display.print("Temperatura: ");
Display.print(temp);
Display.setCursor(0,1);
Display.print("Umidade: ");
Display.print(umid);
delay(1000);
}


