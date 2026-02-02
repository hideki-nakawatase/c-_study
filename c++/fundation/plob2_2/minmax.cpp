#include "minmax.h"

int Minmax::min(int a, int b, int c)
{
  if (a >= b)
  {
    if (b > c)
    {
      return c;
    }
    else
    {
      return b;
    }
  }
  else if (a > c)
  {
    return c;
  }
  else
    return a;
}

int Minmax::max(int a, int b, int c)
{
  if (a >= b)
  {
    if (a > c)
    {
      return a;
    }
    else
    {
      return c;
    }
  }
  else if (b > c)
  {
    return b;
  }
  else
    return c;
}
