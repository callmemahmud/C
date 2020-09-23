#include<stdio.h>
int main()
{
    int a;
    printf("enter month number : ");
    scanf("%d",&a);


    switch (a)

    {
case 1:
    printf("DAYS:31");
    break;

case 2:
    printf("DAYS:28");
    break;

case 3:
    printf("DAYS:31");
    break;

case 4:
    printf("DAYS:30");
    break ;

case 5:
    printf("DAYS:31");
    break;

case 6:
    printf("DAYS:30");
    break ;

case 7:
    printf("DAYS:31");
    break;

case 8:
    printf("DAYS:31");
    break;

case 9:
    printf("DAYS:30");
    break;

case 10:
    printf("DAYS:31");
    break;

case 11:
    printf("DAYS:30");
    break;

case 12:
    printf("DAYS:31");
    }
    return 0;
}
