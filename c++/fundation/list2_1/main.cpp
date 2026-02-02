#include <iostream>
#include "sample.h"

using namespace std;

int main()
{
  CSample obj1, obj2;
  int num;

  cout << "整数を入れてください: " << endl;
  cin >> num;

  obj1.set(num);

  cout << "もう一度入れてください: " << endl;
  cin >> num;

  obj2.set(num);

  cout << "一つ目: " << endl;
  cout << obj1.get() << endl;
  cout << "二つ目: " << endl;
  cout << obj2.get() << endl;

  return 0;
}
