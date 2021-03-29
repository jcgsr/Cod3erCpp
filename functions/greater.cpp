// 28.03.2021

#include <iostream>

using namespace std;

int max(int x, int y);

int main()
{
  cout << "Maior de 3 números\n";
  int x, y, z;

  cout << "Número 1: ";
  cin >> x;
  cout << "Número 2: ";
  cin >> y;
  cout << "Número 3: ";
  cin >> z;
   
  cout << "Maior número é: " << max(x, max(y, z));
  return 0;
}

int max(int x, int y)
{
  return x >= y ? x : y;
}
