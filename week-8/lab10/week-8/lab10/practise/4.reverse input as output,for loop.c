#include<stdio.h>

void reverse(char arr[]);
int main()
{
    char strg[60];
    printf("Enter string elemnts: ");
    scanf("%s", strg);
    reverse(strg);
    return 0;
}
void reverse(char arr[])
{
    int i, n;
    int a = 0;

    for(n=0; arr[n] != 0; n++);
    for(i = 0; i< n/2; i++)
    {    a = arr[i];
        arr[i]=arr[n - 1 - i];
        arr[n - 1 - i] = a;
    }
    for(i = 0; i < n; i++)
        putchar(arr[i]);
}
