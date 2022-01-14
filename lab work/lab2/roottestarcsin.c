#include<stdio.h>
#include<math.h>

float modified_arcsin(float x, float A){
return asin(x)-A;}

void main(){
 float a, x, delta_x, b,y,A;
printf("please enter the value of a:");
scanf("%f",&a);
printf("please enter the value of b:");
scanf("%f",&b);

//a=-1;
//a=0;
//b=1;
printf("dear user please enter A value for the following equation: arcsin(x)=A\n");
scanf("%f",&A);
x=a;
delta_x = 0.1;
printf("\tx\ty\n");
while(x<b)
{
printf("%10.1f%10.1f\n",x,modified_arcsin(x,A));
x += delta_x;
}
}        
