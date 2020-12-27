#include "Finger.h"

Finger::Finger(int port): Finger(port, false, 0, 255)
{
}

Finger::Finger(int port, bool reverse): Finger(port, reverse, 0, 255)
{
}

Finger::Finger(int port, bool reverse, int minPos, int maxPos)
{
  m_port=port;
  m_reverse=reverse;
  m_minPos=minPos;
  m_maxPos=maxPos;
  m_range=m_maxPos-m_minPos;
}

void Finger::init()
{
  m_motor.attach(m_port);
  move(m_minPos);
}

int Finger::getMinPos()
{
  return m_minPos;
}

int Finger::getMaxPos()
{
  return m_maxPos;
}

int Finger::getPosition()
{
  return m_position;
}

int Finger::move(int percent)
{
  if (percent<0)
    m_position=0;
  else if (percent>100)
    m_position=100;
  else
    m_position=percent;

  int mo=0;
  if (m_reverse==false)
    mo=m_minPos+(m_range*m_position/100);
  else
    mo=m_maxPos-(m_range*m_position/100);


  m_motor.write(mo);

  return mo;
}

