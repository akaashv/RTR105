#include<stdio.h>
#include<math.h>

float modified_arcsin(float x, float c){
return asin(x)-c;}

void main(){
 float a, x, delta_x, b,y,c;
printf("please enter the value of a:");
scanf("%f",&a);
printf("please enter the value of b:");
scanf("%f",&b);

//a=-1;
//a=0;
//b=1;
printf("dear user please enter c value for the following equation: arcsin(x)=c\n");
scanf("%f",&c);
printf("please enter the value of precision:");
scanf("%f",&delta_x);
x=a;
//delta_x = 0.1;
printf("\tx\ty\n");
while(x<b)
{
printf("%10.1f%10.1f\n",x,modified_arcsin(x,c));
x += delta_x;
}
}        
