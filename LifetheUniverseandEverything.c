#include <stdio.h>

struct node
{
  short int num;
  struct node *next;
}*start, *rear;

void insert(short int n)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->num = n;
  temp->next = NULL;

  if(start == NULL)
  {
    start = temp;
    rear = start;
    return;
  }

  rear->next = temp;
  rear = rear->next;
}

int main()
{
  start = NULL;
  rear = NULL;
  short int n;
  char buffer;

  while(1)
  {
    scanf("%d", &n);
    if(n == 42)
      break;
    insert(n);
  }
  struct node *p;
  p = start;
  while(p != NULL)
  {
    printf("%d\n", p->num);
    p = p->next;
  }
  return 0;
}
