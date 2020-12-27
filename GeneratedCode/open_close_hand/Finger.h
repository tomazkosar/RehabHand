#ifndef FINGER_H
#define FINGER_H

#include <Servo.h>


class Finger
{
  private:
    Servo m_motor;
    int   m_port;
    bool  m_reverse;
    int   m_minPos;
    int   m_maxPos;
    int   m_position;
    int   m_range;
    
  public:
    Finger(int port);
    Finger(int port, bool reverse);
    Finger(int port, bool reverse, int minPos, int maxPos);

    void init();

    int getMinPos();
    int getMaxPos();
    int getPosition();

    int move(int percent);
};

#endif

