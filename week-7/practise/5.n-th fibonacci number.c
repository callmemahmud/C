
#include<stdio.h>
int fibonacci (int n);

 int main()
 {
   int n;

   printf("Enter num of term: ");
   scanf("%d", &n);
   printf("fibonacci series is: ");

fibonacci(n);
    return 0;
 }

int fibonacci (int n)
 {
   int a=0, b=1, c,i;
   for(i=1 ; i<=n; i++)
   {
     printf("%d ", a);
     c = a+b;
     b = a;
     a=c;
   }

 }
