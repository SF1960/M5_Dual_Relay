#pragma once

/********************************************************************************
*
* Library for M5StickCPlus
*
* Use functions...
*
* stick::setup()
*
********************************************************************************/

int width = 0;
int height = 0;

namespace stick {

  void setup(){

    M5.begin();                // Init M5StickCPlus.  
    M5.Lcd.setRotation(3);     // Rotate the screen.  
    M5.Lcd.setTextSize(2);     // Set text size. 
    width = M5.Lcd.width();    // The screen's width
    height = M5.Lcd.height();  // The screen's height
    Serial.printf("LCD WIDTH: %d HEIGHT: %d\n", width, height);

  }

}
