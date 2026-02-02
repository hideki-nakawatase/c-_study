#include "number.h"
#include <iostream>

using namespace std;

int main()
{
  Number *pN = 0;
  pN = new Number();
  int a = 18;
  int b = 23;
  pN->setNumber(a, b);
  cout << pN->getAdd() << endl;
  delete pN;
  return 0;
}