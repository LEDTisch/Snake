#include <Arduino.h>
#include "LED-Tisch.h"

LEDTisch ledtisch=LEDTisch(10,15,1);


void setup() {
    ledtisch.init(10);
    ledtisch.clear();
    ledtisch.setcolor(255,0,0);
    ledtisch.drawkoordinatensystem(5,5);
    ledtisch.show();
}

void loop() {
<<<<<<< HEAD




}
=======
  // put your main code here, to run repeatedly:
}
>>>>>>> parent of 4023f0a... dfsx
