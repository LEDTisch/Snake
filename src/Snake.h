#include <Arduino.h>


#include "Var.h"
class Snake{
    private:
        int length=6;
        int arraySizeX=10;
        int arraySizeY=15;
        //int snake[10][15][2];
        int snake[15*10][2];

        void moveSnake();

    

    public:

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
    void move();
    void addPixel();
    int WandKontrolle();  
    /*
        -1 - keine wandkollision
         0 - oben
         1 - rechts
         2 - unten
         3 - links 
    */  
   int SnakeKontrolle();
   /*
        -1 - keine Snake kollision
        bei kollision gibt es die position in der Snake wo die kollision ist zurück
   */
};

