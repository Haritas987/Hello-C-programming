#include<stdio.h>
#include<conio.h>

void main()
{
 float a,b,sum,sub,mul,div;

 clrscr();

 printf("\nEnter the first number : ");
 scanf("%f",&a);
 printf("\nEnter the second number : ");
 scanf("%f",&b);

 sum = a+b;
 sub = a-b;
 mul = a*b;
 div = a/b;

 printf("\n\nAddition of numbers       : %f ",sum);
 printf("\nSubtraction of numbers    : %f ",sub);
 printf("\nMultiplication of numbers : %f ",mul);
 printf("\nDivision of numbers       : %f ",div);

 getch();



}
