#include <Arduino.h>

int led_R = 7;
int led_G = 6;
int led_B = 5;
int botao = 8;


void acendeVermelho(){
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, HIGH);
  }

void acendeVerde(){
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, HIGH);
  }

void acendeAzul(){
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, LOW);
  }

void acendeAmarelo(){
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, HIGH);
  }

void acendeAzulClaro(){
   digitalWrite(led_R, HIGH);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, LOW);
  }

void acendeBranco(){
  digitalWrite(led_R, LOW);
  digitalWrite(led_G, LOW);
  digitalWrite(led_B, LOW);
  }
  
void apagaLed(){
  digitalWrite(led_R, HIGH);
  digitalWrite(led_G, HIGH);
  digitalWrite(led_B, HIGH);
  }


void setup() {
  pinMode(led_R, OUTPUT);
  pinMode(led_G, OUTPUT);
  pinMode(led_B, OUTPUT); 
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  
  if(digitalRead(botao) == LOW){

    acendeVermelho();
    delay(200);
    acendeAzulClaro();
    delay(200);
    acendeVerde();
    delay(200);
    acendeAmarelo();
    delay(200);
    acendeAzul();
    delay(200);
    acendeBranco();
    delay(200);  
      
  }
  else{
    apagaLed();
  }

}