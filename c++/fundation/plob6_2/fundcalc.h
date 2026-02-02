#ifndef _FUNDCALC_H_
#define _FUNDCALC_H_

class Fundcalc
{
public:
  void setValue1(double a);
  void setValue2(double b);
  double getValue1();
  double getValue2();
  double add();
  double sub();

protected:
  double m_number1;
  double m_number2;
};

#endif