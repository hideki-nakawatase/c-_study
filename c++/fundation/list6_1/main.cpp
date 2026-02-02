#include "car.h"
#include "ambulance.h"

int main()
{
  CCar c;
  c.supply(40);
  c.move();
  c.move();
  c.move();
  CAmbulance a;
  a.supply(20);
  a.move();
  a.move();
  a.nortification();
  a.move();
  a.move();
  return 0;
}