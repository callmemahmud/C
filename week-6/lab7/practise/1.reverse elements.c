#include<stdio.h>
int main()
{ int n;
   printf("The number of Elements:");
   scanf("%d",&n);

   int a[n],i;
 for(i=0;i<n;i++)
 {printf("Enter Elements:");
     scanf("%d",&a[i]);
 }

 for(i=n-1;i>=0;i--)

 {printf("Reverse elements: a[%d]=%d \t",i,a[i] );
 }
 return 0;
}
