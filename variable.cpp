// 27.03.2021
// Primeiro aniversário de Mone sem ela...

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  double price = 99.80;
  double tax = 0.08;

  cout << "****PRICE****\n" << endl;
  double final_price = price * (1 + tax);
  printf("The final price is %.2f\n", final_price);
  cout << "The final price is " << final_price << endl;

  string name;
  cout << "Enter your name: ";
  cin >> name;

  std::cout << "Your name is: " << name << std::endl;
  return 0;
}
