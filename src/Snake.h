#include <Arduino.h>
#include "LED-Tisch.h"

class Snake{
    private:
        int length=1;
        int snake[10][15][2];
        

    public:
LEDTisch ledtisch=LEDTisch(10,15,1);

    Snake();
    void init(int _pin);
    void draw();
};

