#include<stdio.h>
int countSearchKey(int a[], int n, int key);
int main()
{
    int i, n, key, result, search;
    printf("Enter array size:");
    scanf("%d", &n);
    printf("Enter Elements: ");

    int a[n];
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("Search key:");
    scanf("%d", &search);

    result= countSearchKey(a, n, search);
    printf("Search key appears %d times", result);
    return 0;
}

int countSearchKey(int a[],int n,int key)
{
    int i, count=0;
    for(i=0; i<n; i++)
    {
        if(a[i]==key)
            count++;
    }
    return count;
}

