#include "fundcalc.h"

void Fundcalc::setValue1(double a)
{
  m_number1 = a;
}

void Fundcalc::setValue2(double b)
{
  m_number2 = b;
}

double Fundcalc::getValue1()
{
  return m_number1;
}

double Fundcalc::getValue2()
{
  return m_number2;
}

double Fundcalc::add()
{
  return m_number1 + m_number2;
}

double Fundcalc::sub()
{
  return m_number1 - m_number2;
}