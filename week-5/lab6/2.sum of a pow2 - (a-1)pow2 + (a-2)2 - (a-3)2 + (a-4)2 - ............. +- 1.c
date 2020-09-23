#include<stdio.h>
#include<math.h>
int main()
{
    int a, i, b=0, c, result;
    printf("Enter an integer value: ");
    scanf("%d", &a);
    for(i=0; i<a; i++)
    {
        c=pow(-1, b);
        result=result+c*pow(a-i,2);
        b++;
    }
    printf("%d", result);
    return 0;
}
