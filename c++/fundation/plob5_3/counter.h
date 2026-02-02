#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter
{
public:
  Counter();
  ~Counter();
  void count();
  static int getTotalCount();
  int getCount();

private:
  int m_count;
  static int m_totalCount;
};

#endif