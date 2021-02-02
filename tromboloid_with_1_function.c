//Write a program to find the volume of a tromboloid using one function
#include<stdio.h>
int main()
{
float h,b,d,volume;
printf("Enter h:");
scanf("%f",&h);
printf("Enter b:");
scanf("%f",&b);
printf("Enter d:");
scanf("%f",&d);
volume =(1/3.0 * ((h * d) * d)+ (d/ b));
printf("Volume of tromboliod is %f",volume);
return 0;
}
