#include<stdio.h>
#include<string.h>
void reverse(char arr[]);

int main()
{
   char str[50];
   printf("Enter the string: ");
   gets(str);
   reverse(str);
   return 0;
}


void reverse(char arr[])
{   int i=0 , j=0 , x;
   j = strlen(arr) - 1;

   while (i < j)
    {
      x = arr[i];
      arr[i] = arr[j];
      arr[j] = x;
      i++;
      j--;
    }
    printf("\n %s", arr);
 }
