// Sinal N°1
#define ledVermelho1 2
#define ledAmarelo1 3
#define ledVerde1 4

// Sinal N°2
#define ledVermelho2 8
#define ledAmarelo2 9
#define ledVerde2 10

//Sensor de luz e led
#define led 12
#define sensor A1

void setup(){
  pinMode(ledVermelho1, HIGH);
  pinMode(ledAmarelo1, HIGH);
  pinMode(ledVerde1, HIGH);
  
  pinMode(ledVermelho2, HIGH);
  pinMode(ledAmarelo2, HIGH);
  pinMode(ledVerde2, HIGH);
  
  pinMode(led, HIGH);
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(ledVermelho1, HIGH);
  digitalWrite(ledVerde2, HIGH);
  delay(250);
  digitalWrite(ledVerde2, LOW);
  digitalWrite(ledAmarelo2, HIGH);
  delay(100);
  digitalWrite(ledVermelho1, LOW);
  digitalWrite(ledAmarelo2, LOW);
  digitalWrite(ledVermelho2, HIGH);
  digitalWrite(ledVerde1, HIGH);
  delay(250);
  digitalWrite(ledVerde1, LOW);
  digitalWrite(ledAmarelo1, HIGH);
  delay(100);
  digitalWrite(ledAmarelo1, LOW);
  digitalWrite(ledVermelho2, LOW);
  
  int vldr = analogRead(sensor);
  if(vldr < 111){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
  Serial.println(vldr);
}
