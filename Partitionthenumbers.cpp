#include <iostream>

using namespace std;

char * solution(unsigned long long int, unsigned long long int);

int main()
{
  int t;
  unsigned long long int n, x;
  char **s;

  cin >> t;

  s = new char*[t];

  for(int i = 0; i < t; i++)
  {
    cin >> x;
    cin >> n;
    s[i] = solution(n, x);
  }

  for(int i = 0; i < t; i++)
  {
    cout << s[i] << endl;
  }

  return 0;
}

char* solution(unsigned long long int n, unsigned long long int x)
{
  char *a;
  unsigned long long int sum;
  unsigned long long int complement1;
  unsigned long long int complement2;

  a = new char[n + 1];

  a[x - 1] = '2';

  sum = (unsigned long long int)n * (n + 1) / 2;
  sum -= x;

  if(sum % 2 == 1)
  {
    return "impossible";
  }

  complement1 = complement2 = sum / 2;

  for(int i = n - 1; i >= 0; i--)
  {
    if(i == x - 1)
      continue;

    if((i + 1) <= complement1)
    {
      a[i] = '0';
      complement1 -= (i + 1);
    }
    else if((i + 1) <= complement2)
    {
      a[i] = '1';
      complement2 -= (i + 1);
    }
    else
    {
      return "impossible";
    }
  }

  if(a[0] == '1')
  {
    for(int i = 0; i < n; i++)
    {
      if(a[i] == '1')
      {
        a[i] = '0';
      }
      else if(a[i] == '0')
      {
        a[i] = '1';
      }
    }
  }
  a[n] = NULL;
  return a;
}
