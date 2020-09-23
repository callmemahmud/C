#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int elements[n];
    printf("\nEnter array elements: \n");

    int i,j,temp;
    for(i=0; i<n; i++)
        scanf("%d",&elements[i]);
    for(i=0; i<n; i++)
        for(j=0; j<i; j++)
            if(elements[i]>elements[j])
            {
                temp=elements[i];
                elements[i]=elements[j];
                elements[j]=temp;
            }
    printf("\nThe top three largest elements: \n");

    for(i=0; i<3; i++)
        printf(" %d ",elements[i]);
        printf("\n");
    return 0;
}
