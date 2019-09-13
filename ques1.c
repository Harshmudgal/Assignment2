#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,area,s;
printf("Enter the sides of the triangle");
scanf("%f %f %f",&a,&b,&c);
s=(a+b+c)/2;
float x=s*(s-a)*(s-b)*(s-c);
area=sqrt(x);
printf("The area is=%f",area);
}


