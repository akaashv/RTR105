#include<stdio.h>
#include<math.h>
double my_arcsin(double x){
double a,S;
int k=0;
a = (1.)*pow(x,2*k+1)/(pow(4,k)*(pow(1.,2))*(2*k+1));
S=a;
printf("%.2f\t%8.2f\t%8.2f\n", x,a,S);

while(k<500){
	k++;
	a = a*(k*(x*x)*(2*k-1)*(2*k-1))/(2*(k*k)*(2*k+1));
	S = S + a;
	printf("%.2f\t%8.2f\t%8.2f\n", x,a,S);
	}
return S;
}

void main(){
	double x, y, yy;
printf("note:x<1");
printf("enter the x-value:");
scanf("%lf", &x);
	y= asin(x);
	printf("standard function arcsin - y= arcsin(%.2f)=%.2f\n",x,y);
	yy= my_arcsin(x);
	printf("user function - y= my_arcsin(%.2f)=%.2f\n",x,yy);
}
