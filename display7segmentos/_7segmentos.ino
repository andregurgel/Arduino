#define A 8
#define B 9
#define C 3
#define D 4
#define E 5
#define R 7
#define G 6
#define DP 2
#define ledVermelho 10
#define ledAmarelo 11
#define ledVerde 12
#define ledAzul 13

int numeroRandom;

void setup(){
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(DP, OUTPUT);
  
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);
}

void loop(){
  numeroRandom = random(1,5);
  
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAzul, LOW);
  digitalWrite(A, LOW);
  digitalWrite(B, LOW);
  digitalWrite(C, LOW);
  digitalWrite(D, LOW);
  digitalWrite(E, LOW);
  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  
  if(numeroRandom == 1){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(C, HIGH);
    
    delay(2000);
  }else if(numeroRandom == 2){
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(E, HIGH);
    digitalWrite(D, HIGH);
    
    delay(2000);
  }else if(numeroRandom == 3){
    digitalWrite(ledVerde, HIGH);
    digitalWrite(A, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    digitalWrite(D, HIGH);
    
    delay(2000);
  }else if(numeroRandom == 4){
    digitalWrite(ledAzul, HIGH);
    digitalWrite(R, HIGH);
    digitalWrite(B, HIGH);
    digitalWrite(G, HIGH);
    digitalWrite(C, HIGH);
    
    delay(2000);
  }
}
