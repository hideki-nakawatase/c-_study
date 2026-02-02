#ifndef _DATA_H_
#define _DATA_H_

#include <iostream>
#include <string>

using namespace std;

class Data
{
private:
  int number;
  string comment;

public:
  void init();
  void set(int n, string c);
  int getNum();
  string getCom();
};

#endif