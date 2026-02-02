#ifndef _Position_H_
#define _Position_H_

#include "Vector2D.h"

class Position2D : public Vector2D
{
public:
  void resetPosition();
  void move(int dx, int dy);
};

#endif