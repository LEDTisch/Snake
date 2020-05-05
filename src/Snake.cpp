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
        ledtisch.setcolor(255-l*10,l*10,0);
        ledtisch.drawkoordinatensystem(this->snake[l][0],this->snake[l][1]);
    }

    ledtisch.show();
}

void Snake::moveSnake(){

}


void Snake::createSnake(int xpos,int ypos){
for(int i=0;i<arraySizeX*arraySizeY;i++){
snake[i][0]=-1;
snake[i][1]=-1;
}
for(int i=0;i<length+1;i++){
snake[i][0]=xpos;
snake[i][1]=ypos;
}

}
void Snake::addPixel(){
   // length=length+1;

}


void Snake::move(){
ledtisch.drawkoordinatensystem(snake[length-1][0],snake[length-1][1],0x000000);
/*
        snake[2][0]=snake[1][0];
                snake[2][1]=snake[1][1];

    snake[1][0]=snake[0][0];
        snake[1][1]=snake[0][1];
        */
        for(int i=length-1;i>0;i--){
            snake[i][0]=snake[i-1][0];
            snake[i][1]=snake[i-1][1];

        }

switch(direction){
    case 0://rechts
                direction=0;

snake[0][0] += 1;
    break;
    case 1://links
            direction=1;

    snake[0][0] += -1;
    break; 
    case 2://oben
            direction=2;
    
snake[0][1] +=1;
    break;
    case 3://unten


    snake[0][1] += -1;
    break;

}




}