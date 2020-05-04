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
        ledtisch.drawkoordinatensystem(this->snake[l][l][0],this->snake[l][l][1]);
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
for(int x=0;x<arraySizeX;x++){
    for(int y=0;y<arraySizeY;y++){
        snake[x][y][0]=-1;
        snake[x][y][1]=-1;
    }
}
snake[0][0][0]=xpos;
snake[0][0][1]=ypos;

}
void Snake::addPixel(){
    length=length+1;
}
void Snake::moveDown(){
snake[0][0][1] += -1;

}
void Snake::moveTop(){
snake[0][0][1] +=1;

}
void Snake::moveLeft(){
    snake[0][0][0] += -1;

}
void Snake::moveRight(){
snake[0][0][0] += 1;
}


