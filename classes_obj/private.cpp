// 30.03.2021
// a tia de Susi morreu ontem

#include <iostream>

using namespace std;

const float MINIMUM = 1500;

class Employee 
{
public:
  string name;
private:
  float wage = MINIMUM;
public:
  // Getters
  float get_wage()
  {
    return wage > MINIMUM ? wage : MINIMUM;
  }

  //Setters
  void set_wage(float w)
  {
    if (w >= MINIMUM)
    {
      wage = w;
    }
  }
};

int main()
{
  Employee e1;
  e1.name = "Jr";
  e1.set_wage(400);

  cout << "Private" << endl;
  cout << "US$ " << e1.get_wage() << endl;
  
  return 0;
}