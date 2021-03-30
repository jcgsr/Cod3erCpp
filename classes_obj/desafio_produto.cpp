// 29.03.2021

#include <iostream>

using namespace std;

class Product
{
  public:
  string name;
  float price;
  float discount;

  float final_price()
  {
    return (1 - discount) * price;
  }
};

int main()
{
  cout << "Desafio Produto" << endl;

  Product p1;

  p1.name = "Notebook";
  p1.price = 1600.45;
  p1.discount = 0.15;

  cout << p1.name << endl;
  cout << p1.price << endl;
  cout << p1.discount << endl;
  cout << p1.final_price() << endl;

  cout << "Forma mais reduzida de instanciar objeto" << endl;

  Product p2 {"iPad", 8990, 0.1};

  cout << p2.name << endl;
  cout << p2.price << endl;
  cout << p2.discount << endl;
  cout << p2.final_price() << endl;

  return 0;
}