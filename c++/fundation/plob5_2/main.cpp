#include "object.h"
#include <iostream>

using namespace std;

int main()
{
  Object *o1, *o2, *o3;
  o1 = new Object();
  o2 = new Object();
  o3 = new Object();
  cout << "生成されたオブジェクト数: " << Object::getObjectNum() << endl;
  delete o1;
  cout << "生成されたオブジェクト数: " << Object::getObjectNum() << endl;
  delete o2;
  delete o3;
  cout << "生成されたオブジェクト数: " << Object::getObjectNum() << endl;
}