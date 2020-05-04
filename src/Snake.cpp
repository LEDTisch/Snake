#include <Arduino.h>
#include "Snake.h"
Snake::Snake(){
    



}
void Snake::init(int _pin){
    ledtisch.init(_pin);
    ledtisch.clear();
    ledtisch.setcolor(255,0,0);
    ledtisch.drawkoordinatensystem(5,5);
    ledtisch.show();
}
void Snake::draw(){
    for(int l=0;l<this->length;l++){
        ledtisch.drawkoordinatensystem(this->snake[l][l][0],this->snake[l][l][1]);
    }
    
    ledtisch.drawkoordinatensystem(5,0);
    ledtisch.show();
}


