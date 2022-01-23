## LAB 1-SERIES REPORT 
In this lab we used taylor series to make code to determine the values of f(x)= arcsin(x), and for calcultion while loop was used, we used printf to make a diagram of the series
and using gnuplot graph of arc sin was plotted,

the important part of the graph is the while loop, which did the calculation:

``` 
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

``` 
# the  picture of result of code:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab1/LW1%20results.png)

# the picture of gnuplot graph






