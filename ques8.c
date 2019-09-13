#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c;
printf("Enter the sides of triangle");
scanf("%f %f %f",&a,&b,&c);
float x=(b*b+c*c-a*a)/2*b*c;
float ang=acos(x);
printf("The angle A is=%f",ang);
}

