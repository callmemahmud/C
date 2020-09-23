#include<stdio.h>
double getAverage(int arr[], int size);
int main ()
{
    double avg;
 int balance[5] = {1000, 2, 3, 17, 50};

 avg = getAverage( balance, 5 ) ;
 printf( "Average value: %f ", avg );

 return 0;
}

double getAverage(int arr[], int size)
{
 int i;
 double avg,sum;

  for (i = 0; i < size; ++i)
 {
sum = sum+ arr[i];
 }
 avg = sum / size;
 return avg;
}
