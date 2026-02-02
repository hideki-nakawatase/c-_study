#include "calculation.h"

using namespace std;

int main()
{
  Calculation c;
  c.setNumber1(65);
  c.setNumber2(72);
  cout << c.getNumber1() << endl;
  cout << c.getNumber2() << endl;

  return 0;
}