#include "hoge.h"

int main()
{
  Hoge *pH = 0;
  pH = new Hoge();
  pH->foo();
  delete pH;
  return 0;
}