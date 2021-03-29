// 28.03.2021

#include <iostream>

using namespace std;

int fatorialFor(int n);
int fatorialRec(int);

int main()
{
  cout << "Recursividade" << endl;
  cout << fatorialFor(4) << endl;
  cout << fatorialRec(4) << endl;
  return 0;
}

int fatorialFor(int n)
{
  int total = 1;
  for (int i = 2; i <= n; i++)
  {
    total *= i;
  }
  return total;
}

int fatorialRec(int n)
{
  if (n == 1) return 1;
  return n * fatorialRec(n - 1);  
}