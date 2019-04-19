#define led 2
void setup(){
  pinMode(led, HIGH);
}

void loop(){
  digitalWrite(led, LOW);
  delay(2000);
  digitalWrite(led, HIGH);
  delay(2000);
}
