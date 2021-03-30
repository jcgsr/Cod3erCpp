// 30.03.2021

#include <iostream>

using namespace std;

class Actor
{
public:
  string name;
  string email;

  // Construtor chama outro Construtor
  Actor() : Actor("who", "who@gmail.com") {}

  Actor(string name, string email)
  {
    this->name = name;
    this->email = email;
  }

  string toString()
  {
    return name + " - " + email;
  }
};

int main()
{
  cout << "Construtores" << endl;

  cout << "Construtor Padrão" << endl;
  Actor a1;
  a1.name = "jjj";
  a1.email = "jjj@fasf.com";
  cout << a1.toString() << endl;
  
  cout << "Construtor ->" << endl;
  Actor a2("ssss", "sss@sffsdf.com");
  cout << a2.toString() << endl;

  cout << "Construtor chama Construtor" << endl;
  Actor a3;
  cout << a3.toString() << endl;
  
  return 0;
}