#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  vector<int> v;

  v.push_back(3);
  v.push_back(10);
  v.push_back(4);
  v.push_back(1);

  sort(v.begin(), v.end());
  
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  return 0;
}