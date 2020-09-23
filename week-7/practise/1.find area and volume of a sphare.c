#include<stdio.h>
#include<math.h>
void findArea(int radius);
void findVolume(int radius);
int main()
{
    int radius ;
    printf("enter radius: ");
    scanf("%d", &radius);
    findArea(radius) ;
    findVolume(radius);
    return 0;
}

void findArea(int radius)
{
float area;
area=4*3.1416*pow(radius,2);
printf("Radius: %.2f ", area );
}

void findVolume(int radius)
{
    float volume;
    volume=4*3.1416*(pow(radius,2)/3);
    printf("Volume: %.2f",volume);
}
