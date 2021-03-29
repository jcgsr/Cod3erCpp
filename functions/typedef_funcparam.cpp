// 28.03.2021

#include <iostream>

using namespace std;

typedef int id;
using counter = long;

int exec(int (*func)(int, int), int a, int b);
int add(int a, int b);
int sub(int a, int b);

int main()
{
  cout << "Função por parâmetro" << endl;
  cout << "Typedef" << endl;
  id a = 5;
  counter b = 10;

  cout << a + b << endl;

  cout << exec(add, 88, 43) << endl;
  cout << exec(sub, 54, 34) << endl;

  return 0;
}

int exec(int (*func)(int, int), int a, int b)
{
  return (*func)(a, b);
}

int add(int a, int b)
{
  return a + b;
}
int sub(int a, int b)
{
  return a - b;
}
