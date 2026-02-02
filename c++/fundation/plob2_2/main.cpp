#include "minmax.h"
#include <iostream>

using namespace std;
int main()
{
  Minmax m;
  int a = 3;
  int b = 9;
  int c = 2;
  cout << a << "," << b << "," << c << "の中で最小は" << m.min(a, b, c) << endl;
  cout << a << "," << b << "," << c << "の中で最大は" << m.max(a, b, c) << endl;
}
