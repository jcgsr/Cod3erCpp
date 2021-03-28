// 28.03.2021
#include <iostream>
using namespace std;

int main()
{
  bool isAdmin = 1; // true
  cout << isAdmin << endl;

  char symbol = '#';
  cout << symbol << endl;

  unsigned short int age = 40;
  cout << age << endl;
 
 // 8 bits = 1 byte

  cout << sizeof(char) << " byte" << endl;
  cout << sizeof(char16_t) << " bytes" << endl;
  cout << sizeof(char32_t) << " bytes" << endl;
  cout << sizeof(wchar_t) << " bytes" << endl;
  cout << sizeof(int) << " bytes " << endl;
  cout << sizeof(long int) << " bytes" << endl;
  cout << sizeof(long long int) << " bytes" << endl;
  cout << sizeof(float) << " bytes" << endl;
  cout << sizeof(double) << " bytes" << endl;

  return 0;
}