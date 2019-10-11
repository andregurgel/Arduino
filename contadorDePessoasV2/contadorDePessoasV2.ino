unsigned long time = 0; // Zerar time

#include <Ultrasonic.h> // Sensor Ultrassom
#include <LiquidCrystal_I2C.h> // Biblioteca do LCD
#include <Wire.h> // Biblioteca para o funcionamento do LCD

//Define os pinos para o trigger e echo
#define trigger 7
#define echo 6

Ultrasonic ultrassom(7,6);
LiquidCrystal_I2C Display(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

byte a[8]= {B00110,B01001,B00110,B00000,B00000,B00000,B00000,B00000,}; // Array que desenha '°' no display.

int contador = 0; // Contar numero de pessoas
long distancia;

void setup() {
  Serial.begin(9600);
  
  // Display
  Display.begin(16,2);
  Display.createChar(1, a); 
  Display.setCursor(2,0); // Coloca o cursor na coluna 7, linha 1
  Display.write(1); // Escreve o simbolo de grau
}

void loop() {
  
  // Escreve no Display
  Display.setBacklight(HIGH);
  Display.setCursor(1,0);
  Display.print("N");
  Display.setCursor(3,0);
  Display.print(" de pessoas:");
  Display.setCursor(7,1);
  Display.print(contador);

  // Sensor Ultrassom
  distancia = ultrassom.Ranging(CM);// ultrassom.Ranging(CM) retorna a distancia em centímetros(CM) ou polegadas(INC)
  Serial.print(distancia); //imprime o valor da variável distancia
  Serial.println("cm");
  
  
  if(distancia >= 25 && distancia <= 62){
   while((millis() - time >= 1000) && (distancia >= 25 && distancia <= 62)){
    contador++;
    // Inicia a millis
    
  } 
  }
  time = millis();
}
