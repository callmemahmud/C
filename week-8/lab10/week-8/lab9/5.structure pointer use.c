#include <stdio.h>
int main ()
{
 char str[]="hello";
 puts(str);


 char *chptr;
 chptr=str;

 puts(chptr);
 return 0;
}
