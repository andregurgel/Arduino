#define ledVermelho 2
#define ledAmarelo 3
#define ledVerde 4

void setup(){
  pinMode(ledVermelho, HIGH);
  pinMode(ledAmarelo, HIGH);
  pinMode(ledVerde, HIGH);
}

void loop(){
digitalWrite(ledVermelho, HIGH);
delay(3000);
digitalWrite(ledVermelho, LOW);
digitalWrite(ledVerde, HIGH);
delay(3000);
digitalWrite(ledVerde, LOW);
digitalWrite(ledAmarelo, HIGH);
delay(1000);
digitalWrite(ledAmarelo, LOW);
}
