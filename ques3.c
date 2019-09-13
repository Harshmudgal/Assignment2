#include<stdio.h>
void main()
{
float a,b,c,d,e,f,area;
printf("\n Enter the coordinates of the triangle");
scanf("%f %f %f %f %f %f", &a,&b,&c,&d,&e,&f);
area=(a*(d-f)-b*(c-e)+(c*f-d*e))/2;
printf("\n The area is=%f",area);
}

 
