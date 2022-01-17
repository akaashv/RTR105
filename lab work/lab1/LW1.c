#include<stdio.h>
#include<math.h>
//printf("arcsin calculation \n");
double my_arcsin(double x){
double a,S;
int k=0;
//printf("arcsin calculation \n");
a = (1.)*pow(x,2*k+1)/(pow(4,k)*(pow(1.,2))*(2*k+1));
S=a;
printf("a0=\t%E S0=\t%8.2f\n",a,S);

while(k<500){
	k++;
	a = a*(k*(x*x)*(2*k-1)*(2*k-1))/(2*(k*k)*(2*k+1));
	S = S + a;
//	printf("%.2f\t%E\t%8.2f\n", x,a,S);
if(k==500){
printf("a500=\t%E S500=\t%8.2f\n",a,S);
}
if(k==499){
printf("a499=\t%E S499=\t%8.2f\n",a,S);
}       

	}
return S;
}

void main(){
	double x, y, yy;
printf("arcsin calculation \n");
printf("note:-1<=x<=1\n");
printf("enter the x-value:\n");
scanf("%lf", &x);
	y= asin(x);
	printf("standard function arcsin - y= arcsin(%.2f)=%.2f\n",x,y);
	yy= my_arcsin(x);
	printf("user function - y= my_arcsin(%.2f)=%.2f\n",x,yy);

printf("               500                                 \n"     );
printf("              _____                                \n"     );
printf("             \\               2*k+1                \n"     );
printf("              \\     (2*k)!* x                     \n"     );
printf(" arcsin(%.2f)= >  ______________________           \n" ,x  );
printf("              /       k     2                      \n"     );
printf("             /_____  4 *(k!)  *(2*k+1)             \n"     );
printf("              k=0                                  \n"     );
printf("                             2       2      \n");
printf("                          k*x *(2k-1)       \n");
printf("recurrence multiplier: __________________   \n");
printf("                            2               \n");
printf("                         2*k *(2k*+1)       \n");


}
