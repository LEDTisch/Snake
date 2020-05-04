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
if(blue=='4'){//drehen
snake.moveTop();
}

if(blue=='2'){//rechts
snake.moveRight();
}

if(blue=='0'){//links
 snake.moveLeft();
}

if(blue=='7'){//runter
snake.moveDown();
}

if(blue=='1'){//neuesspiel

}
}



   }
}

long takt=millis();
void loop() {
if(millis()>takt){
    snake.move();
    takt=millis()+500;
}
        snake.draw();

        steuerung();

}
