#include <iostream>

using namespace std;

bool isPrime(int n){
  for(int i = 2; i <= n / 2; i++){
    if(n % i == 0)
      return false;
  }
  return true;
}

int main(){
  int n;
  cin >> n;

  if(isPrime(n) == true)
    cout << "YES";
  else
    cout << "NO";  

  return 0;
}