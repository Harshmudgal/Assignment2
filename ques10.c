#include<stdio.h>
#include<stdio.h>
void main()
{
float h,k,r,s,chr;
printf("Enter the centre, radius and the line");
scanf("%f %f %f %f",&h,&k,&r,&s);
float y1,y2;
float x=sqrt(r*r-(h-k)*(h-k));
y1=k-x;
y2=k+x;
if(y1>y2)
chr=y1-y2;
else
chr=y2-y1;
printf("The length of chord is %f",chr);
}

