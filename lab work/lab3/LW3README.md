## LAB 3-DERIVATIVE REPORT 
In this lab we used finite difference method to make code to determine the 1st and 2nd derivative of my funtion arcsin(x), in the output of the code user enter values for a and b and code outputs arcsin(x), 1st and 2nd derivative of my funtion arcsin(x), for all x values between a and b.
and for calcultion while loop was used and inside the loop finite difference formula for both 1st and 2nd derivative was entered, and the loop did the finite difference calculation and I specifically used central differnce method for 1st derivative to increase accuracy, we also made this code to output results in .dat file using FILE and fpointer so user can use this file to plot in gnuplot and using result obtained in .dat file graph for arcsin(x), 1st and 2nd derivative using both analytical and finite difference was plotted.

the important part of the graph is the while loop doing finite difference, which did the calculation:

``` 
while(x<b){
        // y=sin(x);
        diff1 = 1/sqrt(1-pow(x,2));
        fdiff1= (asin(x+(delta_x/2))-asin(x-(delta_x/2)))/delta_x;
         diff2 = x/sqrt(pow(1-pow(x,2),3));
        fdiff2= (asin(x+delta_x)-(2*asin(x))+asin(x-delta_x))/pow(delta_x,2);
      //printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,sin(x), (sin(x+delta_x)-sin(x))/delta_x,cos(x));
     fprintf(fpointer,"%10.2f\t %10.2f\t\t %10.2f\t\t\t %10.2f\t\t %10.2f\t %10.2f\n\n", x,asin(x), fdiff1,diff1,fdiff2,diff2);
       //imp printf("%10.2f\t\t%10.2f\t\t%10.2f\t\t%10.2f\t\t%10.2f\t\t%10.2f\n",x,asin(x), fdiff1,diff1,fdiff2,diff2);
       // printf("%10.2f\t%10.2f\n",x,y);
        x +=delta_x;// x= x+ delta_x;
    }

``` 
# the  picture of result of code:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab3/LW3results1.png)

# the picture showing result that output as .dat file:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab3/LW3results2.png)
# the picture of gnuplot graph
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab3/Lab3diffgnuplot.png)
# the picture of 1st derivative graph from wolfram alpha:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab3/LW3resultsw2.png)
# the picture of 2nd derivative graph from wolfram alpha:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab3/Lab3diffgnuplot.png)
we can verify that code is giving correct values by compring with wolfram alpha


