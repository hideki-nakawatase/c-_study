#include <iostream>

using namespace std;

int main()
{
  int *num = new int[4];
  int i;
  for (i = 0; i < 4; i++)
  {
    num[i] = i;
    cout
        << "n[" << i << "]" << "=" << num[i] << " ";
  }
  cout << endl;
  delete[] num;
  return 0;
}