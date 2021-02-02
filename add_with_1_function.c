//Write a program to add two user input numbers using one function.

#include<stdio.h>
int main()
{
int a,b,sum;
printf("Enter number:");
scanf("%d",&a);
printf("Enter number:");
scanf("%d",&b);
sum = a+b;
printf("Sum of %d and %d is %d",a,b,sum);
return 0;
}
