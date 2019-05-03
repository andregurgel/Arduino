#include <dht.h>

#define sensor 2

dht sensorDHT;
int temp = 0;
int umidade = 0;

void setup(){
Serial.begin(9600);

}

void loop(){
sensorDHT.read11(sensor);

temp = sensorDHT.temperature;
umidade = sensorDHT.humidity;

Serial.print("\n\nTemperatura: ");
Serial.print(temp);
Serial.print("\nUmidade: ");
Serial.print(umidade);

delay(1000);

}

