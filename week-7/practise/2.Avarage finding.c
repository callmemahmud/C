#include <stdio.h>
int computeAverage(int a, int b);
int main()
{
    int a, b,c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    c= computeAverage(a, b);
    printf("Average is: %d", c);
    return 0;
}
int computeAverage(int a, int b)
{
    int avg;
    avg=(a+b)/2;
    return avg;
}
