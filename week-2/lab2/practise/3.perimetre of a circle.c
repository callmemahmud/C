#include <stdio.h>
#include<math.h>
int main()
{
   int rad;
   float area, perimeter;
   printf("Enter the radius: ");
   scanf("%d", &rad);


    area = 3.14 * pow(rad,2);
	printf(" Area of the circle = %.2f \n ", area);

    perimeter = 2 * 3.14 * rad;
    printf("Perimeter of the circle = %.2f", perimeter);


return(0);
}
