#include <Arduino.h>
#include "Snake.h"

Snake snake=Snake();



void setup() {
    ledtisch.init(10);
    ledtisch.clear();
    ledtisch.setcolor(255,0,0);
    ledtisch.drawkoordinatensystem(5,5);
    ledtisch.show();
}

void loop() {




}
