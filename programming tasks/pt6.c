#include <stdio.h>
//all in one calculator
void sum();// no argument no return
float sub(void); //no argument with return
void mult(float, float); //With Argument no Return Type
float divi(float, float); //With Argument and with Return Type
void main()
{
    // no argument no return
    sum();
    //no argument with return
    float s;
   s=sub();
   printf("subtracted value:%f",s);
   //With Argument Without Return Type
    float x, y;
    mult(x, y);
    //With Argument and with Return Type
   float u,v,d;
   d = divi(u,v);
   printf("quotient value:%f",d);
}

void sum()  // no argument no return
{
    float a, b, sum=0;
    printf("enter a and b to add:");
    scanf("%f%f", &a, &b);
    sum =a+b;
    printf("sum:%f",sum);
}


float sub(void) //no argument with return
{
    float c, d, sub=0;
    printf("enter c and d to subtract:");
    scanf("%f%f", &c, &d);
    sub =c-d;
    return sub;
    
}


void mult(float x, float y)
{
    float mult=0;
    printf("enter x and y to multiply:");
    scanf("%f%f", &x, &y);
    mult =x*y;
    printf("multiple:%f",mult);
}

float divi(float u, float v) //With Argument and with Return Type
{
    float divi=0;
    printf("enter u and v where u is divided by v:");
    scanf("%f%f", &u, &v);
    divi =u/v;
    return divi;
}
