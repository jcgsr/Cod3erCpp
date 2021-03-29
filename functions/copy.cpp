// 28.03.2021

#include <iostream>

using namespace std;

void incRef(int& value);

int main()
{
  cout << "Valor por referência" << endl;
  int x = 8;
  incRef(x);
  cout << x << endl;
  return 0;
}

void incRef(int& value)
{
  value++; 
}