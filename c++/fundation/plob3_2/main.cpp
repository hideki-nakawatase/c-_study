#include "twoStrings.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
  TwoStrings t;
  t.setString1("string1");
  t.setString2("string2");
  cout << t.getString1() << endl;
  cout << t.getString2() << endl;
  cout << t.getConnectedString() << endl;
  cout << t.getConnectedLength() << endl;
}