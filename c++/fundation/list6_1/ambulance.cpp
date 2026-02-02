#include "ambulance.h"
#include <iostream>

using namespace std;

CAmbulance::CAmbulance()
{
  cout << "CAmbulance生成" << endl;
}

CAmbulance::~CAmbulance()
{
  cout << "CAmbulance破棄" << endl;
}

void CAmbulance::nortification()
{
  cout << "救急救命活動" << endl
       << "呼び出しは" << m_number << endl;
}