#include "data.h"
#include <iostream>

using namespace std;

int main()
{
  Data d;
  int n = 80;
  string c = "テスト";
  d.init();
  d.set(n, c);
  cout << "Numberは" << d.getNum() << endl;
  cout << "Commentは" << d.getCom() << endl;
  return 0;
}