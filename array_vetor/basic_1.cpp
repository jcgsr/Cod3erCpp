// 29.03.2021

#include <iostream>

using namespace std;

int main()
{
  string names[5];
  names[0] = "Ciso";
  names[1] = "Cila";
  names[2] = "Jr";
  names[3] = "Mone";
  names[4] = "Jó";

  cout << "Array" << endl;

  cout << "**Manual**" << endl;

  cout << names[0] << endl;
  cout << names[1] << endl;
  cout << names[2] << endl;
  cout << names[3] << endl;
  cout << names[4] << endl;

  string names2[] = {"Jó", "Susi", "Diana", "Mozart", "Beethoven", "Brenda", "Mia"};

  cout << "**FOR**" << endl;
  int size = sizeof names2 / sizeof names2[0];
  for (int i = 0; i < size; i++)
  {
    cout << names2[i] << endl;
  }
  
  cout << "**FOREACH**" << endl;
  for(string s: names2)
  {
    cout << s << endl;
  }

  return 0;
}