#include<stdio.h>
#include<math.h>
int seriesSum1(int a);
int main()
{
    int a,sum;
    printf("Enter a : ");
    scanf("%d", &a);
    sum = seriesSum1(a);
    printf("%d", sum);
    return 0;
}
 int seriesSum1 (int a)
 {
     float x, y;
     x = 0;
     y = 0;
     for (int i = 0; i <= a;i++)
    {
        if(i % 2 == 0)
        {
            x = pow((a - i), 2) + x;
        }
        else
        {
            y = pow((a - i), 2) + y;
        }
    }
    return x - y;
 }
