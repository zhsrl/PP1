#include <iostream>
#include <vector>

using namespace std;


bool cmp(int a, int b){
  return a > b;
}

int main(){

  vector<int> v;

  v.push_back(5);
  v.push_back(7);
  v.push_back(2);
  v.push_back(10);

  sort(v.begin(), v.end(), cmp);
  // reverse(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";


  return 0;
}