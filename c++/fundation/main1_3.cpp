#include <iostream>
#include <string>

using namespace std;

int main() {
  string s,t;
  t="文字を入力してください: ";
  cout << t;
  cin >> s;
  cout << s << "が入力されました。" << endl;
  return 0;
}