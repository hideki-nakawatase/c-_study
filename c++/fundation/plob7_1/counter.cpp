#include "counter.h"

Counter::Counter() : m_count(0) {}

int Counter::getCount()
{
  return m_count;
}

void Counter::count()
{
  m_count += 1;
}

void Counter::count(int a)
{
  m_count += a;
}

void Counter::reset()
{
  m_count = 0;
}