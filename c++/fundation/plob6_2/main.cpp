#include "newcalc.h"
#include <iostream>

using namespace std;

int main()
{
  Newcalc n;
  n.setValue1(4.7);
  n.setValue2(17.5);
  cout << "m_number1: " << n.getValue1() << endl;
  cout << "m_number2: " << n.getValue2() << endl;
  cout << "add: " << n.add() << endl;
  cout << "sub: " << n.sub() << endl;
  cout << "mul: " << n.mul() << endl;
  cout << "dev: " << n.dev() << endl;

  return 0;
}