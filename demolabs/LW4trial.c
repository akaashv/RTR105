


#include<stdio.h>
#include<math.h>
 
/* Define the function to be integrated here: */
double f(double x){
  return sin(x);
}
 
/*Function definition to perform integration by Trapezoidal Rule */
double trapezoidal(double f(double x), double a, double b, int n){
  double x,h,sum=0,integral;
  int i;
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    sum=sum+f(x);
  }
  integral=(h/2)*(f(a)+f(b)+2*sum);
  return integral;
}

double simpsons(double f(double x),double a,double b,int n){
  double h,integral,x,sum=0;
  int i;
  h=fabs(b-a)/n;
  for(i=1;i<n;i++){
    x=a+i*h;
    if(i%2==0){
      sum=sum+2*f(x);
    }
    else{
      sum=sum+4*f(x);
    }
  }
  integral=(h/3)*(f(a)+f(b)+sum);
  return integral;
}
 
/*Program begins*/
void main(){
  int n,i=2;
  double a,b,h,eps,sum=0,integral,integral_new;
 
  /*Ask the user for necessary input */
  printf("\nEnter the initial limit: ");
  scanf("%lf",&a);
  printf("\nEnter the final limit: ");
  scanf("%lf",&b);
  printf("\nEnter the desired accuracy: ");
  scanf("%lf",&eps);
  integral_new=trapezoidal(f,a,b,i);
 
  /* Perform integration by trapezoidal rule for different number of sub-intervals until they converge to the given accuracy:*/
  do{
    integral=integral_new;
    i++;
    integral_new=trapezoidal(f,a,b,i);
  }while(fabs(integral_new-integral)>=eps);
 
  /*Print the answer */
  printf("The integral is: %lf\n with %d intervals (trapazoid rule)",integral_new,i);
  
  // rectangle rule
  float integr1=0, integr2;
int k, m=2;
  integr2 = (b-a)/2 * (f(a)+f(b));
integr2  = fabs(integr2) + 2*eps;
while(fabs(integr2-integr1)>eps)
{
m = m*2;
h = (b-a)/m;
integr1 = integr2;
integr2 = 0;
for(k=0;k<m;k++)
{
integr2 = integr2 + h*f(a+(k+0.5)*h);
}

}
printf("value of integral(area): %.3f (corresponds to sum of area of %d rectangle)\n", integr2,m);

// simpson Rule
double Sintegral,Sintegral_new;
Sintegral_new=simpsons(f,a,b,i);
 
  /* Perform integration by simpson's 1/3rd for different number of sub-intervals until they converge to the given accuracy:*/
  do{
    Sintegral=Sintegral_new;
    i=i+2;
    Sintegral_new=simpsons(f,a,b,i);
  }while(fabs(Sintegral_new-Sintegral)>=eps);
   
  /*Print the answer */
  printf("\nThe integral is: %lf for %d sub-intervals.(using simpson rule)\n",Sintegral_new,i);

}
