// 28.03.2021

#include <iostream>
#include "func2.h"

using namespace std;

int main()
{
  cout << "Funções Parte 2\n";
  log (1, false);
  log (2, true);
  log (3, false);
  return 0;
}

void log (int number, bool newLine)
{
  cout << "Number: " << number;
  newLine ? cout << endl : cout << " ";
}
