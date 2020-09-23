#include<stdio.h>
int main()
{
    int i,j,n;
    printf("decresing row number: ");
    scanf("%d",&n);


  for(i=0;i<=n;i++)
  {
  for (j=n-i;j>=1;j--)
  {printf("*");}

   printf("\n");
   }
  }
