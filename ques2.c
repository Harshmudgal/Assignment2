#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,dist;
printf("Enter the coordinates");
scanf("%f %f %f %f",&a,&b,&c,&d);
float x=(a-c)*(a-c)+(b-d)*(b-d);
dist=sqrt(x);
printf("\n The distamce between both points is =%f",dist);
} 
