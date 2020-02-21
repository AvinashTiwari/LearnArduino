//*****************************************************************************************************************************************************************************************
//***************************************************************************  Arduino UNO simulator met Java  ****************************************************************************
//*******************************************************************  Copyright by Marc Van Den Berge en Louis D'hont  *******************************************************************
//*****************************************************************************************************************************************************************************************

#include "SimulatorProgram.h"
#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {

Serial.begin(9600);
inString.reserve(10);

lcd.begin(16,2);


}

void loop() {

  lcdsetCursor(0,0);

  for (int thisChar = 0; thisChar < 10; thisChar++){
    lcdLprint(thisChar);
    delay(500);
    
    }

   lcdsetCursor(16,1);
   lcdautoscroll();

    for (int thisChar = 0; thisChar < 10; thisChar++){
    lcdLprint(thisChar);
    delay(500);
    
    }

    lcdnoAutoscroll();
    lcdclear();
}
