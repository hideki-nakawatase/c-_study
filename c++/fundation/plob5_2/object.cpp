#include "object.h"
#include <iostream>

using namespace std;

int Object::m_count = 0;

Object::Object()
{
  m_count++;
}

Object::~Object()
{
  m_count--;
}

int Object::getObjectNum()
{
  return m_count;
}