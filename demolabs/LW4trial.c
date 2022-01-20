#include<stdio.h>
#include<math.h>

void main()
{
 float a=0., b=M_PI/2, eps=1.e-3, h, integr1=0, integr2;
int k, n=2;

integr2 = (b-a)/2 * (sin(a)+sin(b));
integr2  = fabs(integr2) + 2*eps;
while(fabs(integr2-integr1)>eps)
{
n = n*2;
h = (b-a)/n;
integr1 = integr2;
integr2 = 0;
for(k=0;k<n;k++)
{
integr2 = integr2 + h*sin(a+(k+0.5)*h);
}

}
printf("value of integral(area): %.3f (corresponds to sum of area of %d rectangle)\n", integr2,n);

}


