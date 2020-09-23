#include<stdio.h>

int main()
{
        int arr[50];
        int i, n;
        printf("Enter the size of an array: \n");
        scanf("%d", &n);
        printf("Enter the elements of the array: \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("Even numbers in the array are: ");
        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                printf("%d \t", arr[i]);
            }
        }
        printf("\n Odd numbers in the array are: ");
        for (i = 0; i < n; i++)
        {
            if (arr[i] % 2 != 0)
            {
                printf("%d \t", arr[i]);
            }
        }
        return 0;
    }
