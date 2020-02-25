//*****************************************************************************************************************************************************************************************
//***************************************************************************  Arduino UNO simulator met Java  ****************************************************************************
//*******************************************************************  Copyright by Marc Van Den Berge en Louis D'hont  *******************************************************************
//*****************************************************************************************************************************************************************************************

#include "SimulatorProgram.h"
int Green1 = 2;
int Yellow1 = 3;
int Red1 = 4;

int Green2 = 6;
int Yellow2 = 7;
int Red2 = 8;

void setup() {

Serial.begin(9600);
inString.reserve(10);

pinMode(Green1, OUTPUT);
pinMode(Yellow1, OUTPUT);
pinMode(Red1, OUTPUT);

pinMode(Green2, OUTPUT);
pinMode(Yellow2, OUTPUT);
pinMode(Red2, OUTPUT);
}

void loop() {
  green_light();
  delay(500);
  yellow_light();
  delay(2500);
  red_light();
  delay(5000);
  DigitalWrite(Green2,LOW);
  DigitalWrite(Yellow2,LOW);
  DigitalWrite(Red2,LOW);
  delay(2500);
}


void green_light(){
 
  DigitalWrite(Green2,LOW);
  DigitalWrite(Yellow2,LOW);
  DigitalWrite(Red2,HIGH);
  delay(2500);
  DigitalWrite(Green1,HIGH);
  DigitalWrite(Yellow1,LOW);
  DigitalWrite(Red1,LOW);
  }


void yellow_light(){
  DigitalWrite(Green1,LOW);
  DigitalWrite(Yellow1,HIGH);
  DigitalWrite(Red1,LOW);
  delay(2500);
  DigitalWrite(Green2,LOW);
  DigitalWrite(Yellow2,LOW);
  DigitalWrite(Red2,HIGH);
  }

  
void red_light(){
  DigitalWrite(Green1,LOW);
  DigitalWrite(Yellow1,LOW);
  DigitalWrite(Red1,HIGH);
  delay(2500);
  DigitalWrite(Green2,HIGH);
  DigitalWrite(Yellow2,LOW);
  DigitalWrite(Red2,LOW);
  }
