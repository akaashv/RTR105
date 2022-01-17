
#include<stdio.h>
#include<math.h>
float modified_arcsin(float x, float c){
return sin(x)-c;}

int main(){
	float a=-1.5*M_PI, b=1.5*M_PI, c=0.5, x, deltax=1.e-3/*0.001*/, funkca, funkcb, funkcx;
    int k=0;

    funkca= sin(a); funkcb= sin(b);
    if(funkca*funkcb>0){
        printf("interval[%.2f;%.2f] sin(x) function",a,b);
        printf("no roots (or a pair of roots)\n" );
        return 1;}

printf("                 sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
printf("sin(%7.3f)=%7.3f\n",b,sin(b));

while((b-a)>deltax){
    k++;//k=k+1;//k+1;
    x=(a+b)/2.;
    if(modified_arcsin(x,c)>0)//pie a=0->
    a = x;
    else
    b = x;
   printf("%2d. iteration: sin(%7.3f)=%7.3f\t",k,a,sin(a));
    printf("sin(%7.3f)=%7.3f\n",x,sin(x));
    printf("sin(%7.3f)=%7.3f\n",b,sin(b));}
    printf("The root is at x=%.3f, because sin(x) is %.3f\n",x,sin(x));
    return 0;
}
