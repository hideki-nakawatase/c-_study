#ifndef _CALC_H_
#define _CALC_H_

class Calc
{
private:
  int n1, n2;

public:
  Calc();
  Calc(int a, int b);
  int add();
  int add(int a, int b);
  void setValue(int a, int b);
  int getValue1();
  int getValue2();
};

#endif