#define led 8
#define beep 11
#define sensor 2
boolean valorS;

void setup(){
  pinMode(led, OUTPUT);
  pinMode(beep, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop(){
  valorS = digitalRead(sensor);
  if(valorS == true){
    digitalWrite(led, HIGH);
    tone(beep, 1500);
  }else{
    digitalWrite(led, LOW);
    noTone(beep);
  }
}
