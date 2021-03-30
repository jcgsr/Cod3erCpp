// 30.03.2021

#include <iostream>

using namespace std;

class Person
{
public:
  string name;
  Person(string name) : name(name) 
  {
    cout << "Hello! My name is " << name << "." << endl;
  }
  ~Person()
  {
    cout << name << " is saying good-bye." << endl;
  }
};

int main()
{
  cout << "NEW - HEAP" << endl;

  int x = 5; // stack

  int* y = new int(10); // heap
  cout << x * *y << endl;
  delete y;

  int* w = new int[100];
  w[8] = 8;
  cout << w[8] << endl;
  delete[] w;

  cout << "Class and Object Heap Memory" << endl;
  cout << "Stack - no 'new'" << endl;
  cout << "automatic desctructor" << endl;
  Person person1("Aunt May");

  cout << "Heap - 'new'" << endl;
  Person* person2 = new Person("Uncle Ben");
  cout << "automatic desctructor" << endl;
  delete person2;

  return 0;
}