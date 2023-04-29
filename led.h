/*
Goal: interface for led class
Themes: class
*/

#ifndef led_h
#define led_h
#include <Arduino.h>
class led {  //declare led class
private:
  int pin;  // pin parameter

public:
  led();         // overload constructor
  led(int pin);  //constructor
  void on();     //on function
  void off();    //off function
  void init();   // init function
};
#endif