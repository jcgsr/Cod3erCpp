// 29.03.2021

#include <iostream>
#include <sstream>

using namespace std;

class Date
{
  public:
  int day;
  int month;
  int year;

  string toString()
  {
    stringstream ss;
    ss << day << "/" << month << "/" << year;
    return ss.str();
  }
};

int main()
{
  cout << "C++ Classes" << endl;
  Date d1;
  d1.day = 3;
  d1.month = 11;
  d1.year = 2023;

  cout << d1.day << "/" << d1.month << "/" << d1.year << endl;

  Date d2;
  d2.day = 31;
  d2.month = 12;
  d2.year = 2022;

  cout << d2.day << "/" << d2.month << "/" << d2.year << endl;

  cout << d1.toString() << endl;
  cout << d2.toString() << endl;
  return 0;
}