#include <stdio.h>

int length(char *s);
int main ()
{
    char str[50];
    int a;
    printf("Enter string:");
    gets(str);
    a = length(str);
    printf("%d", a);
    return 0;
}

int length(char *s)
{
    int i, count =0;
    for (i=0; s[i]!='\0'; i++)
    {
        count ++;
    }
    return count;
}
