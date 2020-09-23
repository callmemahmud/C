#include <stdio.h>
int main()
{
	int age,adult=0,count=0;


	while(count<15)
	{
		printf("Enter age of person [%d]: ",count+1);
		scanf("%d",&age);

		if(age>=40 && age<=60)

			adult++;

		count++;
	}


        printf("\n Age between 40 and 60: %d\n",adult);
	return 0;
}
