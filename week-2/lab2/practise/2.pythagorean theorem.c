#include<stdio.h>
int main ()
{
    int a , c;
   float H , A ;
   printf("Enter Base:");
   scanf("%d", &a);
   printf("Enter Hypotenuse:");
   scanf("%d", &c);

   H = sqrt(pow(c,2)- pow(a,2));
   printf("Height is : %.2f\n" , H);
   A = (H*a)/2;
   printf("Area is: %.2f\n" , A);

    return 0;
}
