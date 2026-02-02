#include "calc.h"

Calc::Calc() : n1(0), n2(0)
{
}

Calc::Calc(int a, int b) : n1(a), n2(b)
{
}

void Calc::setValue(int a, int b)
{
  n1 = a, n2 = b;
}

int Calc::add()
{
  return n1 + n2;
}

int Calc::add(int a, int b)
{
  return a + b;
}

int Calc::getValue1()
{
  return n1;
}

int Calc::getValue2()
{
  return n2;
}