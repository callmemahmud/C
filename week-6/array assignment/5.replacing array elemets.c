#include <stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int input;
    scanf("%d",&input);

    int original_arr[input];
    printf("\nEnter the elements of the array: \n");

    int i;
    for(i=0; i<input; i++)
        scanf("%d",&original_arr[i]);
    printf("\n Enter the position of the element you want to change: \n");

    int position;
    scanf("%d",&position);

    int element;
    printf("\n Enter new element: \n");
    scanf("%d",&element);

    original_arr[position]=element;

    printf("\n After replacing with the new element,the array: \n");
    for(i=0; i<input; i++)
        printf("%d ",original_arr[i]);

    printf("\n");

    return 0;
}
