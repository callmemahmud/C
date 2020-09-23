
#include <stdio.h>

int main()
{
    int a;

    printf("Enter any number: ");
    scanf("%d", &a);


    if(a > 0)
    {
        printf("Number is POSITIVE");
    }


    if(a==0)
    {
        printf("Number is NONE of THEM");
    }
    if(a < 0)
    {
        printf("Number is NEGATIVE");
    }


    return 0;
}
