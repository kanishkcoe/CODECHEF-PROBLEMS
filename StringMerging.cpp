#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char* merge(char *, char*);
int f(char *);

int main()
{
  char *a;
  char *b;
  char *c;
  int n, m, t;
  int *ans;
  //char buffer;
  cin >> t;
  ans = new int[t];

  for(int i = 0; i < t; i++)
  {
    cin >> n;
    cin >> m;
    a = new char[n+1];
    b = new char[m+1];
    cin.ignore();
    cin>>a;
    //cin>>buffer;
    cin>>b;
    c = merge(a, b);
    ans[i] = f(c);
    cout << c << endl;
    cout << ans[i] << endl;
  }
  //
  // for(int i = 0; i < t; i++)
  // {
  //   cout << ans[i] << endl;
  // }

  return 0;
}

char* merge(char *a, char *b)
{
  char *m;
  m = new char[strlen(a) + strlen(b) + 1];
  int i, j, k;
  i = j = k = 0;

 m[k] = a[i];
 k++;
 i++;

  while(a[i] && b[j])
  {
    if(m[k-1] == a[i])
    {
      m[k] = a[i];
      i++; k++;
    }
    else if(m[k-1] == b[j])
    {
      m[k] = b[j];
      k++; j++;
    }
    else
    {
      m[k] = a[i];
      i++; k++;
    }
  }

  while(a[i])
  {
    m[k] = a[i];
    k++; i++;
  }

  while(b[j])
  {
    m[k] = b[j];
    k++; j++;
  }

  m[k] = NULL;
  return m;
}

int f(char *s)
{
  int sum = 1;

  for(int i = 1; s[i]; i++)
  {
    if(s[i] != s[i - 1])
    {
      sum += 1;
    }
  }

  return sum;
}
