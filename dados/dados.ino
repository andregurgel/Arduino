#define ledN1 2
#define ledN2 3
#define ledN3 4
#define ledN4 5
#define ledN5 6
#define ledN6 7
#define ledN7 8
int numeroRandom;

void setup(){
  pinMode(ledN1, OUTPUT);
  pinMode(ledN2, OUTPUT);
  pinMode(ledN3, OUTPUT);
  pinMode(ledN4, OUTPUT);
  pinMode(ledN5, OUTPUT);
  pinMode(ledN6, OUTPUT);
  pinMode(ledN7, OUTPUT);
}

void loop(){
  numeroRandom = random(1,8);
  
  digitalWrite(ledN1, LOW);
  digitalWrite(ledN2, LOW);
  digitalWrite(ledN3, LOW);
  digitalWrite(ledN4, LOW);
  digitalWrite(ledN5, LOW);
  digitalWrite(ledN6, LOW);
  digitalWrite(ledN7, LOW);
  
  if(numeroRandom == 1){
    digitalWrite(ledN4, HIGH);
    delay(3000);
  }
  else if(numeroRandom == 2){
    digitalWrite(ledN1, HIGH);
    digitalWrite(ledN7, HIGH);
    delay(2000);
  }
  else if(numeroRandom == 3){
    digitalWrite(ledN1, HIGH);
    digitalWrite(ledN4, HIGH);
    digitalWrite(ledN7, HIGH);
    delay(2000);
  }
  else if(numeroRandom == 4){
    digitalWrite(ledN1, HIGH);
    digitalWrite(ledN3, HIGH);
    digitalWrite(ledN5, HIGH);
    digitalWrite(ledN7, HIGH);
    delay(2000);
  }
  else if(numeroRandom == 5){
    digitalWrite(ledN1, HIGH);
    digitalWrite(ledN3, HIGH);
    digitalWrite(ledN4, HIGH);
    digitalWrite(ledN5, HIGH);
    digitalWrite(ledN7, HIGH);
    delay(2000);
  }
  else if(numeroRandom == 6){
    digitalWrite(ledN1, HIGH);
    digitalWrite(ledN2, HIGH);
    digitalWrite(ledN3, HIGH);
    digitalWrite(ledN5, HIGH);
    digitalWrite(ledN6, HIGH);
    digitalWrite(ledN7, HIGH);
    delay(2000);
  }
  else if(numeroRandom == 7){
    digitalWrite(ledN1, HIGH);
    digitalWrite(ledN2, HIGH);
    digitalWrite(ledN3, HIGH);
    digitalWrite(ledN4, HIGH);
    digitalWrite(ledN5, HIGH);
    digitalWrite(ledN6, HIGH);
    digitalWrite(ledN7, HIGH);
    delay(2000);
  }
}

