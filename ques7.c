#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,p,q,r;
printf("Enter the values");
scanf("%f %f %f %f %f %f",&a,&b,&c,&p,&q,&r);
float y=(r*a-c*p)/(p*b-a*q);
float x=(-c-b*y)/a;
printf("The intersection point is(%f,%f)",x,y);
}
  
