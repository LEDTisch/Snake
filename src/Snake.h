#include <Arduino.h>
#include "LED-Tisch.h"

class Snake{
    private:
        int length=3;
        int arraySizeX=10;
        int arraySizeY=15;
        //int snake[10][15][2];
        int snake[15*10][2];

        void moveSnake();

    

    public:
LEDTisch ledtisch=LEDTisch(10,15,1);

    int direction=0;
    /*
        0 - rechts
        1 - links
        2 - oben
        3 - unten
    */

    Snake();
    void init(int _pin);
    void draw();
    void createSnake(int x,int y);
    void moveRight();
    void moveLeft();
    void moveTop();
    void moveDown();
    void move();
    void addPixel();
    
};

