#include<stdio.h>
#include<string.h>
int main()
{ char s[50];
  int i,len=0;

    printf("Enter String: ");
    gets(s);


    while(s[i] != '\0')
    {
        i++;
        len++;
    }
    printf("length: %d",len);

    return 0;
}
