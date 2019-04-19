#define led 2
#define sensor A1

void setup(){
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop(){
  int vldr = analogRead(sensor);
  if(vldr < 222){
    digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
  }
}
