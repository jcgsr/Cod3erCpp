// 28.03.2021
#include <iostream>
using namespace std;

int main()
{
  cout << "Desafio IF" << endl;
  int n1, n2, n3;

  cout << "Número 1: ";
  cin >> n1;
  cout << "Número 2: ";
  cin >> n2;
  cout << "Número 3: ";
  cin >> n3;

  if (n1 > n2 && n1 > n3)
  {
    cout << n1 << " é o maior número.";
  }
  else if (n2 > n1 && n2 > n3)
  {
    cout << n2 << " é o maior número.";
  }
  else
  {
    cout << n3 << " é o maior número.";
  }
  return 0;
}