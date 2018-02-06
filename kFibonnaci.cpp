#include <iostream>

using namespace std;

unsigned int T(int n, int k)
{
  if(n <= k)
  {
    return 1;
  }
  else
  {
    unsigned int sum = 0;
    for(int i = 1; i <= k; i++)
    {
      sum += T(n-i, k);
    }
    return sum;
  }
}

int main()
{
  int n, k;
  cin >> n;
  cin >> k;
  cout << T(n, k) % 1000000007;
}
