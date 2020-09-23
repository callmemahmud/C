#include<stdio.h>
int main()
{
    char operator;
    double a,b,sum,sub,mul,div;

    printf("Enter an Operator:");
    scanf("%c",&operator);
    printf("Enter 1st Number:");
    scanf("%lf",&a);
    printf("Enter 2nd Number:");
    scanf("%lf",&b);
    switch(operator)
{
      case'+':
          sum=a+b;
          printf("The Result: %lf",sum);
          break;

      case'-':
          sub=a-b;
          printf("The Result: %lf",sub);
          break;

      case'*':
          mul=a*b;
          printf("The Result: %lf",mul);
          break;


      case'/':
           if(b==0)
    {
         printf("\n Error.(B CAN'T BE 0) \n",div);
    }

       else
    {
        div=a/b;
            printf("The Result Is: %.2lf",div);

    }



      break;




     default:
     printf("Your Input Is Wrong.");

    }
    return 0;
}
