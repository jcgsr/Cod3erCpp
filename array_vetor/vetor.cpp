// 29.03.2021

#include <iostream>
#include <vector>

using namespace std;

int main()
{
  cout << "Vetores" << endl;
  cout << "Vetores podem crescer, são flexíveis" << endl;
  cout << "Arrays NÃO podem crescer, não são flexíveis" << endl;

  vector<int> nums = {1, 2, 3};
  nums.push_back(4);
  nums.push_back(5);
  nums.push_back(6);

  for(int n: nums)
  {
    cout << n << endl;
  }

  cout << "Outra forma de iterar um vetor modificando-o" << endl;
  for(auto i = nums.begin(); i != nums.end(); i++)
  {
    *i += 100;
    cout << *i << endl;
  }

  cout << "Reverso" << endl;
  for(auto i = nums.rbegin(); i != nums.rend(); i++)
  {
    // *i += 100;
    cout << *i << endl;
  }

  cout << "Vetores 2" << endl;
  vector<int> nums2;
  nums2.assign(10, 8);

  nums2[4] = 4;
  nums2.erase(nums2.begin() + 3);

  for(auto n: nums2){
    cout << n << " ";
  }

  return 0;
}