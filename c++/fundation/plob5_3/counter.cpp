#include "counter.h"

Counter::Counter() : m_count(0)
{
}

Counter::~Counter()
{
  m_totalCount -= m_count;
}

int Counter::m_totalCount = 0;

void Counter::count()
{
  m_count++;
  m_totalCount++;
}

int Counter::getCount()
{
  return m_count;
}

int Counter::getTotalCount()
{
  return m_totalCount;
}