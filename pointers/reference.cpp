// 28.03.2021

#include <iostream>
using namespace std;

int main()
{
  int a = 2;
  int b = a; // copies the values
  a++;
  b--;

  cout << "Cópia de valor\n";
  cout << "Valor de a: " << a << "\nValor de b: " << b << endl;

  cout << "Valor da referência\n";
  int j = 8;
  cout << "Valor de j: " << j << "\nEndereço na memória de j: " << &j << endl;

  cout << "Variável por referência\n";
  int x = 7;
  int& xRef = x;
  cout << "Valor de x: " << x << "\nEndereço na memória de x: " << &x << endl;
  cout << "Valor de xRef: " << xRef << "\nEndereço na memória de xRef: " << &xRef << endl;

  cout << "Desreferência\n";
  float pi = 3.14;
  float& piRef = pi;

  cout << piRef << endl;
  cout << &piRef << endl;
  cout << &pi << endl;
  cout << "Pegar o valor da referência: *\n";
  cout << *&pi << endl;
  
  return 0;
}