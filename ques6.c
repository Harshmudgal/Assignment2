#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c;
printf("Enter the values of a,b,c");
scanf("%f %f %f",&a,&b,&c);
float x,y;
x=-a/2;
y=-b/2;
float r=sqrt(x*x+y*y-c);
printf("center is(%f,%f) and the radius %f",&x,&y,&r);
}
 

