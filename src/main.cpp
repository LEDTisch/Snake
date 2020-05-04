#include <Arduino.h>
#include "Snake.h"

Snake snake=Snake();



void setup() {
Serial.begin(9600);
snake.init(10);


}

void loop() {
snake.draw();
}