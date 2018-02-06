#include <stdio.h>

int main()
{
  unsigned int x;
  float y;
  scanf("%d", &x);
  scanf("%f", &y);

  if(y >= 0 && x <= y && x % 5 == 0)
  {
    y -= (float)x;
    y -= 0.5;
  }
  printf("%0.2f\n", y);
  return 0;
}
