//*****************************************************************************************************************************************************************************************
//***************************************************************************  Arduino UNO simulator met Java  ****************************************************************************
//*******************************************************************  Copyright by Marc Van Den Berge en Louis D'hont  *******************************************************************
//*****************************************************************************************************************************************************************************************

#include "SimulatorProgram.h"
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
const int buttonPin = 10;
const int ledPin = 13;

int buttonPushCounter =0;
int buttonState = 0;
int lastButtonState = 0;


void setup() {

Serial.begin(9600);
inString.reserve(10);
lcd.begin(16,2);

pinMode(buttonPin, INPUT);
pinMode(ledPin, OUTPUT);



}

void loop() {

  buttonState = DigitalRead(buttonPin);

  if(buttonState != lastButtonState)
    { 
       if(buttonState == HIGH) {
            buttonPushCounter++;
            lcdsetCursor(7,0);
            lcdprint("On");
            
            delay(1000);
            lcdsetCursor(0,0);
            lcdprint("number of Button");
            delay(1000);
            
            lcdsetCursor(4,1);
            lcdprint("Pushedd : ");
            
            delay(1000);
            
            lcdsetCursor(8,1);
            lcdprint(buttonPushCounter);
            delay(1000);
      } else {
            lcdsetCursor(7,0);
            lcdprint("off");
            delay(500);

        }

      lastButtonState = buttonState;

      if(buttonPushCounter %4 == 0) {
           DigitalWrite(ledPin, HIGH);
        }else {
           DigitalWrite(ledPin, LOW);          
          }

    }

}
