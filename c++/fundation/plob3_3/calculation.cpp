#include "calculation.h"

void Calculation::setNumber1(int num)
{
  m_number1 = num;
}

void Calculation::setNumber2(int num)
{
  m_number2 = num;
}

int Calculation::add()
{
  return m_number1 + m_number2;
}

int Calculation::sub()
{
  return m_number1 - m_number2;
}