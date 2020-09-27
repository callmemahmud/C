#include<stdio.h>
int main()
{
 int var=20;
 printf("Address of var: %d\n",&var);


 int *ip;

 ip=&var;

printf("Address stored in ip: %d\n",ip);
 printf("Value of *ip : %d\n",*ip);
 return 0;
}
