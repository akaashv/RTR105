## LAB 4-INTEGRAL REPORT 
In this lab we used rectangle rule,trapazoidal rule and simpson rule to make code to determine definite integral of my funtion arcsin(x), in the output of the code user enter interval values(a and b) and code outputs integral of arcsin(x) us each of the three method
and for calcultion while and for loop was used and inside the loop rectangle rule,trapazoidal rule and simpson rule formula was entered, and the loop did the calculation and fabs was used to get the absolute value and in gnu plot the graph of of funtion and the area under the curve was plotted.

the important part of the graph is the while and for loop doing rectangle rule,trapazoidal rule and simpson rule, which did the calculation and important parts are shown below:

``` 
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

``` 
``` 
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
``` 
```
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
```
```
do{
    integral=integral_new;
    i*=2;//i++;
    integral_new=trapezoidal(f,a,b,i);
  }while(fabs(integral_new-integral)>=eps);
 ```

# the  picture of result of code:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab4/LW4%20results.png)

# the picture of gnuplot graph from -1 to 1:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab4/Lab4intgnuplot.png)

# the picture of integral graph from -1 to 1 from wolfram alpha:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab4/LW4resultsw.png)
we can verify that code is giving correct values by compring with wolfram alpha
