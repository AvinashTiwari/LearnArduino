//*****************************************************************************************************************************************************************************************
//***************************************************************************  Arduino UNO simulator met Java  ****************************************************************************
//*******************************************************************  Copyright by Marc Van Den Berge en Louis D'hont  *******************************************************************
//*****************************************************************************************************************************************************************************************

#include "SimulatorProgram.h"

const int buttonPin = 3;     // the number of the pushbutton pin on the board or Arduino Simulator I/O
const int ledPin =  2;      // the number of the LED pin
int buttonState = 0;         // variable for reading the pushbutton status
void setup() {

Serial.begin(9600);
inString.reserve(10);

// put your setup code here, to run once:
pinMode(led, OUTPUT);

 // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT); 

}

void loop() {

  buttonState = DigitalRead(buttonPin)
// put your main code here, to run repeatedly:
DigitalWrite(led, HIGH); // Arduino Simulator code for software components
delay(1000);

DigitalWrite(led, LOW); // Original code for hardware components
delay(1000);



}
