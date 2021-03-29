// 28.03.2021

#include <iostream>

using namespace std;

auto add = [](int x, int y) -> int { return x + y; };
auto sub = [](int x, int y) -> int { return x - y; };

int main()
{
  cout << "Lambda" << endl;
  cout << add(10, 29) << endl;
  cout << sub(100, 29) << endl;
  return 0;
}