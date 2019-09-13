#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,d,e;
printf("Enter the point and the line");
scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
float dist=(a*c+b*d+c)/sqrt(c*c+d*d);
printf("\n The distance between point and line is=%f",dist);
}

