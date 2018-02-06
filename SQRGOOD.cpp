#include <iostream>
#include <math.h>

using namespace std;

int primefactors(unsigned long long int);

int main()
{

  unsigned long long int n;
  cin >> n;
  unsigned long long int i = 2;

  if(n >= 1300000)
  {
    n -= 1300000;
    i = 3315718;
  }
  else if(n >= 1200000)
  {
    n = n - 1200000;
    i = 3060637;
  }
  else if(n >= 1100000)
  {
    n = n - 1100000;
    i = 2805571;
  }
  else if(n >= 1000000)
  {
    n = n - 1000000;
    i = 2550520;
  }
  else if(n >= 195000)
  {
    n = n - 195000;
    i = 497353;
  }
  else if(n >= 180000)
  {
    n = n - 180000;
    i = 459076;
  }
  else if(n >= 150000)
  {
    n = n - 150000;
    i = 382581;
  }
  else if(n >= 100000)
  {
    n = n - 100000;
    i = 255052;
  }
  else if(n >= 10000)
  {
    n = n - 10000;
    i = 25507;
  }
  else if(n >= 1000)
  {
    n = n - 1000;
    i = 2551;
  }
  else if(n >= 100)
  {
    n = n - 100;
    i = 261;
  }
  while(n)
  {
    if(primefactors(i) == 1)
    {
      // cout << i << endl;
      n--;
    }
    i = i + 1;
  }
  cout << i - 1;
  return 0;
}

int primefactors(unsigned long long int n)
{
  unsigned long long int i = 2, count = 0;
  unsigned long long int s = sqrt(n);
  while(n != 1)
  {
    if(n % i == 0)
    {
      count++;
      if(count >= 2)
      {
        return 1;
      }
      n = n / i;
    }
    else
    {
      if(count >= 2)
      {
        return 1;
      }
      count = 0;
      if(i > s)
        break;
      i++;
    }
  }

  if(count >= 2)
  {
    return 1;
  }
  return 0;
}
