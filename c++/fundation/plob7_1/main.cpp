#include <iostream>
#include "counter.h"

using namespace std;

int main()
{
  Counter *c1;
  c1 = new Counter();
  c1->count();
  cout << "Counter(); " << c1->getCount() << endl;
  c1->count(4);
  cout << "Counter(); " << c1->getCount() << endl;
  c1->reset();
  cout << "Counter(); " << c1->getCount() << endl;
  delete c1;

  return 0;
}