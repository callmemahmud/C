#include<stdio.h>
 int main()
 {
     int x,y;

     printf("Enter Year:");
     scanf("%d",&x);

     y=((x%4==0)&&((x%400==0)||(x%100!=0)));

     switch(y)

     {
        case 1:
            printf("%d Is A Leap Year.",x);
            break;

        case 0:
            printf("%d Is Not A Leap Year.",x);
            break;

        default:
            printf("Invalid.");
            break;

     }

     return 0;
 }
