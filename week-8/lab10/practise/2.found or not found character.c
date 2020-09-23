#include<stdio.h>
#include<string.h>
void search(char arr[], char key);

int main()
{
    int s[50] ;
    char key;
    printf("Enter String Elements: ");
    gets(s);
    printf("Search letter: ");
    scanf("%c",&key);
    search(s, key);
    return 0;

}

void search(char arr[], char key)
{
    char c;
    while (c<arr[c] && key != arr[c])
    {
        c++;
    }
   if (c < arr[c])
    {
      printf("Found");
    }
   else
    {
      printf("Not Found");
    }
}
