#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);

    printf("Enter the elements of the array: \n");
    int arr[size];
    int i,j,c=0;
    for(i=0 ; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<size; i++)
    {
        for(j=i+1 ; j<size ; j++)
        {
            if(arr[i]==arr[j])
            {
                printf("\nDuplicate Number is: %d\n",arr[i]);
                printf("\nIndex of duplicate(%d) numbers: %d, %d\n\n",arr[i],i,j);
                c=1;
            }
        }
    }
    if(c==0)
    {
        printf("\nNo duplicate number.");
    }

    return 0;
}
