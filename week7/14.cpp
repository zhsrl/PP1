#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool isPrime(int n){
	for(int i = 2; i < n; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	if(isPrime(n))
		cout << "YES";
	else
		cout << "NO";
	return 0;
}
