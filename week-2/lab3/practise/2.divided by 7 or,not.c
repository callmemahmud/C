#include<stdio.h>

int main(){
	//1
	int no;
	int totalDigits = 0;

	//2
	printf("Enter a number : ");
	scanf("%d",&no);

	//3
	while(no!=0){
		//4
		no = no/10;
		totalDigits ++;
	}

	//5
	printf("Total digits in the number is %d\n",totalDigits);
}
