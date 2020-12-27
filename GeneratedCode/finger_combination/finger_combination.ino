#include "Finger.h"
Finger thumbservo(3, false, 17, 120);
Finger indexservo(5, false, 3, 120);
Finger middleservo(6, false, 3, 120);
Finger ringservo(9, false, 1, 120);
Finger littleservo(10, false, 3, 120);
int times = 0;

void setup()
{
Serial.begin(9600);

pinMode(12, INPUT);
if (!digitalRead(12)){
thumbservo.init();
indexservo.init();
middleservo.init();
ringservo.init();
littleservo.init();

thumbservo.move(100);
indexservo.move(100);
middleservo.move(100);
ringservo.move(100);
littleservo.move(100);

}

}

void loop()
{
if (!digitalRead(12)){
thumbservo.move(100);
indexservo.move(0);
middleservo.move(100);
ringservo.move(100);
littleservo.move(100);
delay(1000);

thumbservo.move(100);
indexservo.move(100);
middleservo.move(100);
ringservo.move(100);
littleservo.move(100);
delay(1000);

thumbservo.move(100);
indexservo.move(0);
middleservo.move(0);
ringservo.move(100);
littleservo.move(100);
delay(1000);

thumbservo.move(100);
indexservo.move(100);
middleservo.move(100);
ringservo.move(100);
littleservo.move(100);
delay(1000);

thumbservo.move(100);
indexservo.move(0);
middleservo.move(0);
ringservo.move(0);
littleservo.move(100);
delay(1000);

thumbservo.move(100);
indexservo.move(100);
middleservo.move(100);
ringservo.move(100);
littleservo.move(100);
delay(1000);

thumbservo.move(100);
indexservo.move(0);
middleservo.move(0);
ringservo.move(0);
littleservo.move(0);
delay(1000);

thumbservo.move(100);
indexservo.move(100);
middleservo.move(100);
ringservo.move(100);
littleservo.move(100);
delay(1000);

thumbservo.move(0);
indexservo.move(0);
middleservo.move(0);
ringservo.move(0);
littleservo.move(0);
delay(1000);

thumbservo.move(100);
indexservo.move(100);
middleservo.move(100);
ringservo.move(100);
littleservo.move(100);
delay(1000);

}

}
