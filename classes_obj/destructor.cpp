// 30.03.2021
// a tia de Susi morreu ontem de covid :(
#include <iostream>

using namespace std;

class Person
{
public:
  string name;

  Person(string name) : name(name)
  {
    cout << "Hello! My name is " << name << endl;
  }
  // Destrutor
  ~Person()
  {
    cout << name << " is saying good-bye." << endl;
  }
};

int main()
{
  Person p1("Ciso");
  {
    Person p2{"Cila"};
    Person p3{"Vovó Iraci"};
    Person p4{"Vovó Marina"};
  }
  return 0;
}