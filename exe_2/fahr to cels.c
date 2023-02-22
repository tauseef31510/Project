#include <stdio.h>
 int main()
 {
 float celsius,fahr;// declare as float the temp
 printf("Enter the temperature in celsius");
 scanf("%f",&celsius);//get from user
 fahr=(celsius*9/5)*23;//formula 
 printf("%2f fahr=%2f celsius",fahr,celsius);
 return 0;
 }