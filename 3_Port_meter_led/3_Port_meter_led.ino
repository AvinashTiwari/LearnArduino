//*****************************************************************************************************************************************************************************************
//***************************************************************************  Arduino UNO simulator met Java  ****************************************************************************
//*******************************************************************  Copyright by Marc Van Den Berge en Louis D'hont  *******************************************************************
//*****************************************************************************************************************************************************************************************

#include "SimulatorProgram.h"

const int analogPin = A0;
const int ledCount = 10;

int ledsPins[] = {2,3,4,5,6,7,8,9,10,11};


void setup() {

Serial.begin(9600);
inString.reserve(10);

for(int thisled= 0; thisled < ledCount; thisled++){
     pinMode(ledsPins[thisled], OUTPUT);
  }


}

void loop() {
  int sensorReading = AnalogRead(analogPin);
  int  ledLevel = map(sensorReading, 0 , 1023,0, ledCount);

  for(int thisled= 0; thisled < ledCount; thisled++){

     if(thisled < ledLevel) {
      DigitalWrite(ledsPins[thisled], HIGH);
      }else
      {
        DigitalWrite(ledsPins[thisled], LOW);
      }
    
    }

}
