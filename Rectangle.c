#include <stdio.h>

unsigned int check(int a, int b, int c, int d)
{
  if(a == b && c == d)
  {
    return 1;
  }
  else if(a == c && b == d)
  {
    return 1;
  }
  else if(a == d && b == c)
  {
    return 1;
  }
  return 0;
}

int main()
{
  unsigned int n;
  scanf("%d", &n);

  unsigned int **T = (int **)malloc(n * sizeof(unsigned int *));

  for (int i = 0; i < n; i++)
     T[i] = (int *)malloc(5 * sizeof(unsigned int));

  for(int i = 0; i < n; i++)
  {
    for(int j = 1; j < 5; j++)
    {
      scanf("%u", &T[i][j]);
    }
    T[i][0] = check(T[i][1], T[i][2], T[i][3], T[i][4]);
  }

  for(int i = 0; i < n; i++)
  {
    if(T[i][0] == 1)
    {
      printf("%s\n", "YES");
    }
    else
    {
      printf("%s\n", "NO");
    }
  }

  return 0;
}
