#include<stdio.h>
int main()
{int n,i;
printf("Enter number of elemnets:");
scanf("%d",&n);

int a[n];
for(i=0;i<n;i++)
{printf("Enter Elements:");
scanf("%d",&a[i]);}

int x;
printf("\n Search key:");
scanf("%d",&x);
for(i=0;i<n;i++)
{if (a[i]== x)
{printf("  found at a[%d]\t",i);
continue;}
}

if(a[i]!=x)
{printf("  Not Found ");}
 return 0;
}


