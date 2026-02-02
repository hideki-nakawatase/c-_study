#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
  Vector *v1, *v2;
  v1 = new Vector();
  v2 = new Vector(3.7, 8.9);
  v1->set(1.5, 6.4);
  cout << v1->getX() << ", " << v1->getY() << endl;
  cout << v2->getX() << ", " << v2->getY() << endl;
  delete v1;
  delete v2;

  return 0;
}