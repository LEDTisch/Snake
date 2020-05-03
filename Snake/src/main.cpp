#include <Arduino.h>
#include "LED-Tisch.h"

LEDTisch ledtisch=LEDTisch(10,15,1);


void setup() {
    ledtisch.init(10);
}

void loop() {
  // put your main code here, to run repeatedly:
}