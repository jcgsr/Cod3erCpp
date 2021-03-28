// 28.03.2021
#include <iostream>
using namespace std;

int main()
{
  cout << "Ponteiros\n";
  int value = 98765;
  int& ref = value;
  int* pot = &value;

  cout << value << "\t" << ref << "\t" << pot << endl;
  cout << "Ponteiro armazena o endereço da memória\n";

  int* p1;
  int* p2 = nullptr;

  int x = 5;
  int y = 10;

  p1 = &x;
  cout << p1 << endl;
  cout << *p1 << endl;
 
  p1 = &y;
  cout << p1 << endl;
  cout << *p1 << endl;
  return 0;
}