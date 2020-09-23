
#include<stdio.h>
void Sum(int x, int y);
int main()
{
 int var1, var2;
 scanf("%d %d", &var1, &var2);
 Sum(var1, var2);
 return 0;
}
void Sum(int x, int y)
{int result;
 result = x + y;
 printf("%d + %d = %d\n", x, y, result);
}
