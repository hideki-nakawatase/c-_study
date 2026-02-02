#include "newcalc.h"

double Newcalc::mul()
{
  return m_number1 * m_number2;
}

double Newcalc::dev()
{
  if (m_number2 != 0)
    return m_number1 / m_number2;
  else
    return 0.00000000;
}