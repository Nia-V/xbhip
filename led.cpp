/*
Goal: Definittions for led class
Themes: class
*/

#include "led.h"
led::led(int pin) {  // def of class constructor led
  this->pin = pin;   // private pin is equal to arhuement pin
}
void led::init() {       //def of init func
  pinMode(pin, OUTPUT);  //define pin as output
}
void led::off() {        //def of off func
  digitalWrite(pin, 0);  // pin output low
}
void led::on() {         //def of on func
  digitalWrite(pin, 1);  // pin output high
}