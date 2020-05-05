#include <Arduino.h>
#include "Snake.h"

#include "Var.h"

Snake snake=Snake();
char blue;

void setup() {
      Serial1.begin(9600);

    Serial.begin(9600);
snake.init(10);
snake.createSnake(5,7);

}


void steuerung(){
      if(Serial1.available()){
     
    
     //blue=Serial1.read();
     Serial1.setTimeout(50);
     String bb=Serial1.readString();


if(bb[0]=='h'){

}


if(bb[0]=='s'){
blue=bb[1];
if(blue=='4' && snake.direction!=3){//drehen
snake.direction=2;
}

if(blue=='2' && snake.direction!=1){//rechts
snake.direction=0;
}

if(blue=='0' && snake.direction!=0){//links
 snake.direction=1;
}

if(blue=='7' && snake.direction!=2){//runter
snake.direction=3;
}

if(blue=='1'){//neuesspiel

}
}



   }
}



void GameOver(){
        ledtisch.clear();
snake.createSnake(5,7);

}


long takt=millis();
void loop() {
if(millis()>takt){
    snake.move();
    if(snake.WandKontrolle()!=-1 || snake.SnakeKontrolle()!=-1){
            GameOver();
    }
            snake.draw();

    takt=millis()+1000;
}

        steuerung();

}
