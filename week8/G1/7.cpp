#include <iostream>

using namespace std;

int f1(int a, int n)
{
  int k = 1;
  for (int i = 0; i < n; i++)
    k *= a;
  // k = 1 * 2 * 2 * 2
  return k;
}

int f2(int a, int n)
{
  if (n == 0)
    return 1;
  return a * f2(a, n - 1);
}
// a * f(n - 1)
// 2 * 2 * 2 * 1

int main()
{
  int a, n;
  cin >> a >> n;
  cout << f2(a, n) << endl;
  return 0;
}