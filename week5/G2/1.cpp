#include <iostream>

using namespace std;

int main(){

  int a[3][3];

  for(int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << i << " " << j << "\n";
    }
    cout << "\n";
  }

  return 0;
}