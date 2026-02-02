#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter
{
private:
  int m_count;

public:
  Counter();
  int getCount();
  void count();
  void count(int a);
  void reset();
};

#endif