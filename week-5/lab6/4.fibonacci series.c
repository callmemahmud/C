#include <stdio.h>
int main()
{
    int a=0, b=1, c=0, i, n;

    printf("Enter number of terms: ");
    scanf("%d", &n);


    printf("Fibonacci terms: \n");

    for(i=1; i<=n; i++)
    {
        printf("%d \t", c);

        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}
