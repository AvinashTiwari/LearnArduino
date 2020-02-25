//*****************************************************************************************************************************************************************************************
//***************************************************************************  Arduino UNO simulator met Java  ****************************************************************************
//*******************************************************************  Copyright by Marc Van Den Berge en Louis D'hont  *******************************************************************
//*****************************************************************************************************************************************************************************************

#include "SimulatorProgram.h"

// Inventr Arduino Simulator Course Lesson #8

int l[] = {0, 0, 0, 0, 0, 0}, T = 6, a, p;
const int b1 = 12, b2 = 13;


void setup() {

  // serial communication init
  Serial.begin(9600);
  inString.reserve(10);

  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
}

void loop() {
  p = 0;
  p = DigitalRead(b1) ;
  while (DigitalRead(b1) != 0) {
  }
  
  delay(100);
  a = T - 1;
  while (a >= 0 && p == 1) {
    if (l[a] == 1) {
      l[a] = 0;
      a--;
    } else {
      l[a] = 1;
      p = 0;
    }
  }
  p = DigitalRead(b2) ;
  while (DigitalRead(b2) != 0) {
  }
  
  delay(100);
  a = T - 1;
  
  while (a >= 0 && p == 1) {
    if (l[a] == 0) {
      l[a] = 1;
      a--;
    } else {
      l[a] = 0;
      p = 0;
    }
  }
  a = T - 1;
  for (int c = 0; c < T; c++) {
    if (l[c] == 1)
      DigitalWrite(T - c + 1, HIGH);
    else
      DigitalWrite(T - c + 1, LOW);
    a--;
  }
}
