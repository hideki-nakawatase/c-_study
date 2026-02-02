#include "counter.h"
#include <iostream>

using namespace std;

int main()
{
  Counter *c1, *c2;
  c1 = new Counter();
  c2 = new Counter();
  c1->count();
  c1->count();
  c1->count();
  c1->count();
  c1->count();
  c1->count();
  c1->count();
  c2->count();
  c2->count();
  c2->count();
  c2->count();
  c2->count();
  c2->count();
  c2->count();
  c2->count();
  c2->count();
  c2->count();
  c2->count();
  c2->count();
  cout << "c1: " << c1->getCount() << endl;
  cout << "c2: " << c2->getCount() << endl;
  cout << "sum: " << Counter::getTotalCount() << endl;
  delete c1;
  cout << "sum: " << Counter::getTotalCount() << endl;

  return 0;
}