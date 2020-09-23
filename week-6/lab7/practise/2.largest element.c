#include<stdio.h>
int main()
{int n;
printf("Enter the elements number:");
scanf("%d",&n);

int a[n],i;
for(i=0;i<n;i++)
{printf("Enter Elements:");
scanf("%d",&a[i]);}

int large;
large=a[0];
for(i=0;i<n;i++)
{if (a[i]>large)
   {large=a[i];}
}

printf("The largest Element: %d ", large);


return 0;

}
