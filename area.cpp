// 27.03.2021
// Primeiro aniversário de Mone sem ela...
#include <iostream>
#include <iomanip> // format float
using namespace std;

int main()
{
  std::cout << "***Cálculo de Área***" << std::endl;
  
  const float PI = 3.1415;
  float raio;
  float area;

  cout << "Informe o valor do raio: ";
  cin >> raio;
  area = PI * raio * raio;
  cout<< setprecision(2) << fixed;
  cout << "A área é igual a: " << area << endl;
  return 0;
}

