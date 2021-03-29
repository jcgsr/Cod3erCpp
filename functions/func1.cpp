// 28.03.2021

#include <iostream>
using namespace std;

void sayHello();
void sayHelloTo(string name);
string returnHi();
string returnHiTo(string name);

int main()
{
  cout << "Funções em C++!\n";
  sayHello();
  sayHelloTo("Jovane");
  string result = returnHi();
  cout << result;
  cout << returnHiTo("Jovane");

  return 0;
}


void sayHello()
{
  cout << "Hello!\n";
}

void sayHelloTo(string name)
{
  cout << "Hello, " << name << "!" << endl;
}

string returnHi() 
{
  return "Hi!\n";
}
string returnHiTo(string name)
{
  return "Hi, " + name + "!";
}
