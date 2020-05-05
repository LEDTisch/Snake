#include <Arduino.h>
#include "Snake.h"
Snake::Snake(){
    



}
void Snake::init(int _pin){
    ledtisch.init(_pin);
    ledtisch.clear();
    ledtisch.setcolor(0,255,0);
}



void Snake::draw(long verlauf,int u){
    for(int l=0;l<this->length;l++){
        ledtisch.setcolor(255,255,0);
        ledtisch.drawkoordinatensystem(this->snake[l][0],this->snake[l][1]);
    }
    ledtisch.setcolor(verlauf*u,verlauf*u,0);
    ledtisch.drawkoordinatensystem(snake[0][0],snake[0][1]);
        ledtisch.setcolor(255-verlauf*u,255-verlauf*u,0);
    ledtisch.drawkoordinatensystem(snake[length-1][0],snake[length-1][1]);

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
snake[i][1]=ypos+i;
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

int Snake::WandKontrolle(){
if(snake[0][0]>9){//rechts kollision
    return 1;
}else
if(snake[0][0]<0){//links kollision
    return 3;
}else
if(snake[0][1]>14){//oben kollision
    return 0;
}else
if(snake[0][1]<0){//unten kollision
    return 2;
}else{
    return -1;
}
}

int Snake::SnakeKontrolle(){
    int k=-1;
    for(int i=1;i<length;i++){
        if(snake[0][0]==snake[i][0] && snake[0][1]==snake[i][1]){
            return i;
        }else{
            k=-1;
        }
    }
    return k;
}