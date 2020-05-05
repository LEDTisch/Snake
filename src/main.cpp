#include <Arduino.h>
#include "Snake.h"

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
        snake.ledtisch.clear();
snake.createSnake(5,7);

}

long schritt=0;
long takt=millis();
long verlauf=0;
void loop() {
if(millis()>takt){
        if(schritt>50){
    snake.move();
    if(snake.WandKontrolle()!=-1 || snake.SnakeKontrolle()!=-1){
            GameOver();
    }
    schritt=0;
}
            snake.draw(verlauf);


        if(verlauf>=254){
                verlauf=0;
        }
        schritt++;
        verlauf++;
    takt=millis()+10;
}

        steuerung();

}
