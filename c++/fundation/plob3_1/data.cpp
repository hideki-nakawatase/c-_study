#include "data.h"

void Data::init()
{
  number = 0;
  comment = "";
}

void Data::set(int n, string c)
{
  number = n;
  comment = c;
}

int Data::getNum()
{
  return number;
}

string Data::getCom()
{
  return comment;
}