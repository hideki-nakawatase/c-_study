#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  string a;
  s = "My name is ";
  cout << "Write your name: " << endl;
  cin >> a;

  s.append(a + ".");
  cout << s << endl;
  cout << "letter count: " << a.length() << endl;

  printf("char*:%s\n", s.c_str());
  return 0;
}