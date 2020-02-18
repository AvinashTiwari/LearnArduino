//*****************************************************************************************************************************************************************************************
//***************************************************************************  Arduino UNO simulator met Java  ****************************************************************************
//*******************************************************************  Copyright by Marc Van Den Berge en Louis D'hont  *******************************************************************
//*****************************************************************************************************************************************************************************************

#include "SimulatorProgram.h"

const int buttonPin = 2;     // the number of the pushbutton pin on the board or Arduino Simulator I/O
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status


void setup() {

Serial.begin(9600);
inString.reserve(10);

// put your setup code here, to run once:
// initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);      
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);    

}

void loop() {
buttonState = DigitalRead(buttonPin);

 if (buttonState == HIGH) {     
    // turn LED on:    
    DigitalWrite(ledPin, HIGH);                   // Arduino Simulator code
 // digitalWrite(ledPin, HIGH);                   // Original code
  } 
  else {
    // turn LED off:
    DigitalWrite(ledPin, LOW);                   // Arduino Simulator code
 // digitalWrite(ledPin, LOW);                   // Original code
  }
 


}
