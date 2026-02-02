#include "sample.h"
#include <iostream>

using namespace std;

int main()
{
  CSample s;
  int num = 3;

  s.setNum(num);
  cout << s.getNum() << endl;

  return 0;
}