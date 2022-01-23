## LAB 2-ROOTS REPORT 
In this lab we used bisection method to make code to determine the root of my funtion arcsin(x)=c where user enter c and values of a and b where c is in between, and for calcultion while loop was used and inside the loop bisection formula was entered, and the loop did the bisection calculation, which helps to find the and using gnuplot graph of arc sin and f1=a0, f2=a0+a1, f3= a0+a1+a2 was plotted.

the important part of the graph is the while loop doing the bisection method, which did the calculation:

``` 
while ((b - a) > deltax)
    {
      k++;			//k=k+1;//k+1;
      x = (a + b) / 2.;
      if (funkca*modified_arcsin (x, c) > 0)	//pie a=0->
	a = x;
      else
	b = x;
	//each interation
     // printf ("%2d. iteration: sin(%7.3f)=%7.3f\t", k, a, asin (a));
      //printf ("arcsin(%7.3f)=%7.3f\n", x, asin (x));
      //printf ("arcsin(%7.3f)=%7.3f\n", b, asin (b));

    }

	}

``` 
# the  picture of result of code:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/LW2/LW2%20results.png)

# the picture of gnuplot graph
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/LW2/lw2.png)





