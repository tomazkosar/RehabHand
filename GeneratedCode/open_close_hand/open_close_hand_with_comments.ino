#include "Finger.h"

Finger thumbservo(3, false, 17, 120);
//object creation for other fingers 

int milliSec = 1000;

void setup()
{
//setup definitions

thumbservo.init();
// initialization of other fingers

thumbservo.move(100);
// close position for other fingers
}

void loop()
{
thumbservo.move(0);
// open position for other fingers
delay(milliSec);

thumbservo.move(100);
// close position for other fingers
delay(milliSec);
}
