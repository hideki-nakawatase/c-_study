#include "function.h"
#include <iostream>

using namespace std;

int main()
{
  int a = 5;
  int b = 89;
  cout << "max: " << Function::max(a, b) << endl;
  cout << "min: " << Function::min(a, b) << endl;
  return 0;
}