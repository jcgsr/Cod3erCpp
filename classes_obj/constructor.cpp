// 29.03.2021

#include <iostream>

using namespace std;

class Date 
{
  public:
  int day;
  int month;
  int year;

  // Construtor
  Date()
  {
    day = 1;
    month = 1;
    year = 1970;
  }
};

class User
{
public:
  string name;
  string email;

    // Construtor Padrão
  User() {}

  // Construtor com parâmetro
  User(string pname, string pemail)
  {
    name = pname;
    email = pemail;
  }

  string toString()
  {
    return name + " - " + email;
  }

};

int main()
{
  cout << "Construtor" << endl;
  Date d1;
  // d1.day = 1;
  // d1.month = 1;
  // d1.year = 1970;

  cout << d1.day << "/" << d1.month << "/" << d1.year << endl;

  cout << "Construtor User" << endl;

  cout << "User 1" << endl;
  User u1;
  u1.name = "jjj";
  u1.email = "jjj@gmgdg.com";
  cout << u1.toString() << endl;

  cout << "User 2" << endl;
  User u2("ssss", "sss@dsss.com");
  cout << u2.toString() << endl;

  cout << "User 3" << endl;
  User u3 = User("ddddd", "dddd@dfdfd.com");
  cout << u3.toString() << endl;

  return 0;
}