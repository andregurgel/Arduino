#define ledVermelho 2
#define ledVerde 3
#define ledAzul 4
#define botaoVermelho 5
#define botaoVerde 6
#define botaoAzul 9

void setup(){
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
  pinMode(botaoVermelho, INPUT_PULLUP);
  pinMode(botaoVerde, INPUT_PULLUP);
  pinMode(botaoAzul, INPUT_PULLUP);
}

void loop(){
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAzul, LOW);
  digitalWrite(ledVerde, LOW);
  
  if(digitalRead(botaoVermelho) == LOW){
    digitalWrite(ledVermelho, HIGH);
  }
  else if(digitalRead(botaoVerde) == LOW){
    digitalWrite(ledVerde, HIGH);
  }
  else if(digitalRead(botaoAzul) == LOW){
    digitalWrite(ledAzul, HIGH);
  }
  else if(digitalRead(botaoVermelho) == LOW && digitalRead(botaoVerde) == LOW){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, HIGH);
  }
  else if(digitalRead(botaoAzul) == LOW && digitalRead(botaoVerde) == LOW){
    digitalWrite(ledAzul, HIGH);
    digitalWrite(ledVerde, HIGH);
  }
  else if(digitalRead(botaoVermelho) == LOW && digitalRead(botaoAzul) == LOW){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledAzul, HIGH);
  }  
  
}

