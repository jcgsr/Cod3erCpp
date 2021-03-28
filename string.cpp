// 28.03.2021
#include <iostream>
using namespace std;

int main()
{
  cout << "String in C++" << endl;
  string title = "Mr ";
  string name("John");
  string end(10, '!');

  cout << "O nome " << name << " tem " << name.size() << "carcateres. " << endl; 
  cout << "A última letra de " << name << " é " << name.back() 
  << "." << endl;
  cout << "A segunda letra de " << name << " é " << name[1] 
  << "." << endl;

  name.append(end);
  cout << title + name << endl;

  cout << end << endl;
  return 0;
}