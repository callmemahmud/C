#include<stdio.h>
int main ( )
{
    float  a,b,c,d,e;
    printf( "enter 5 numbers:" );
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
    float average;
    average=(a+b+c+d+e)/5;
    printf("%lf\n",(a+b+c+d+e)/5);
    return 0;
}
