#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	
	cout << s << endl;		
	return 0;
}