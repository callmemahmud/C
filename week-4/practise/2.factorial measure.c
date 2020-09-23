#include <stdio.h>

int main()
{
  int i, n, b=1;

  printf("Enter a number to calculate its factorial value:  ");
  scanf("%d", &n);

  for (i= 1; i<= n; i++)
  b = b * i;

  printf(" %d! = %d\n", n, b);


  return 0;
}
