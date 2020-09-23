#include<stdio.h>

int main()
{
    char array[20], char1, char2;
    int counter;
    printf("\nEnter A String: ");
    scanf("%s", array);
    printf("\nOriginal String: %s\n", array);
    printf("\nEnter Character in String To Be Replaced: ");
    scanf(" %c", &char1);
    printf("\nEnter The Character For Replacement: ");
    scanf(" %c", &char2);
    while(array[counter] != '\0')
    {
        if(array[counter] == char1)
        {
            array[counter] = char2;
        }
        counter++;
    }
    printf("\nReplaced Character in String: %s\n", array);
    printf("\n");
    return 0;
}
