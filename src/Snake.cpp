#include <Arduino.h>
#include "Snake.h"
Snake::Snake(){
    



}
void Snake::init(int _pin){
    ledtisch.init(_pin);
    ledtisch.clear();
    ledtisch.setcolor(0,255,0);
}



void Snake::draw(){
    for(int l=0;l<this->length;l++){
        ledtisch.drawkoordinatensystem(this->snake[l][0],this->snake[l][1]);
        Serial.println(l);
    }
    
    ledtisch.show();
}

void Snake::moveSnake(){

}
void Snake::move(){
switch(direction){
    case 0://rechts
        moveRight();
    break;
    case 1://links
        moveLeft();
    break; 
    case 2://oben
        moveTop();
    break;
    case 3://unten
        moveDown();
    break;

}
}

void Snake::createSnake(int xpos,int ypos){
for(int i=0;i<arraySizeX*arraySizeY;i++){
snake[i][0]=-1;
snake[i][1]=-1;
}
snake[0][0]=xpos;
snake[0][1]=ypos;

}
void Snake::addPixel(){
   // length=length+1;

}
void Snake::moveDown(){
            direction=3;
           ledtisch.drawkoordinatensystem(snake[length-1][0],snake[length-1][1],0x000011);


snake[0][1] += -1;

}
void Snake::moveTop(){
    direction=2;
        ledtisch.drawkoordinatensystem(snake[length-1][0],snake[length-1][1],0x000011);
snake[0][1] +=1;

}
void Snake::moveLeft(){
    direction=1;
            ledtisch.drawkoordinatensystem(snake[length-1][0],snake[length-1][1],0x000011);

    snake[0][0] += -1;

}
void Snake::moveRight(){
        direction=0;
        ledtisch.drawkoordinatensystem(snake[length-1][0],snake[length-1][1],0x000011);

snake[0][0] += 1;
}


