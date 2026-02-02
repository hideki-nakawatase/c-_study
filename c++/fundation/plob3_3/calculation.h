#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <iostream>

class Calculation
{
private:
  int m_number1;
  int m_number2;

public:
  void setNumber1(int num);
  void setNumber2(int num);
  int add();
  int sub();
};

#endif