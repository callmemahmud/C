#include<stdio.h>
#include<math.h>
double getArea(int a, int b, int h);

int main()
{
    int a,b,h;
     printf("Enter the value of a , b & height : ");
    scanf("%d  %d   %d", &a, &b, &h);

    float  area;
    area = getArea(a,b,h);

    printf("Area of the trapezium is: %.2f\n", area);
    return 0;
}

double getArea(int a, int b, int h)
{
    float area;
    area = 0.5 * (a+b) * h;
    return area;
}
