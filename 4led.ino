/*
Goal: button light chaser
Themes:  Multiple classes and objects
*/

#include "led.h"  //include Classes
#include "pushbutton.h"

/* create objects*/
led One(2);
led Two(3);
led Three(5);
led Four(4);
pb push(6);

/* initializing steps for objects*/
void setup() {
  push.init();
  One.init();
  Two.init();
  Three.init();
  Four.init();
}


/* code for button light chaser*/
void loop() {
  push.pressed();              // call pressed function
  switch (push.count() % 4) {  //if remainder of push count is... 1 , 2 , 3 , 0
    case 1:
      // statements
      One.on();
      Two.off();
      Three.off();
      Four.off();

      break;
    case 2:
      // statements
      One.off();
      Two.on();
      Three.off();
      Four.off();
      break;
    case 3:
      // statements
      One.off();
      Two.off();
      Three.on();
      Four.off();
      break;
    case 0:
      // statements
      One.off();
      Two.off();
      Three.off();
      Four.on();
      break;
    default:
      // statements
      One.off();
      Two.off();
      Three.off();
      Four.off();
      break;
  }
  push.print();  //Serial print state and push count
}
