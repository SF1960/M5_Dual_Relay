#pragma once

/********************************************************************************
*
* Library for relayHelper.h
*
* Use functions...
*
* relay::setup();
*
********************************************************************************/

#define R1 33
#define R2 32

namespace relay{

  void setup(){
    pinMode(R1, OUTPUT);
    pinMode(R2, OUTPUT);
  }

}