## LAB 5-STATISTICS REPORT 
In this lab we used strings and arrays to make code to determine maximum value, minimum value, median, mode, average and sorting the characters according to ASCII values in the output of the code user enter a sentence and code outputs maximum value, minimum value, median, mode, average and sorting the characters according to ASCII values.
and for calcultion arrays was mainly used and strlen was used to measure the string length and it was sorted by swapping. 

some of the important part of the graph is for loop containg swap, and also the calculation par of each statistics and its shown below:
sort:
``` 
for (c = 0 ; c < n - 1; c++)
 {
  for (d = 0 ; d < n - c - 1; d++)
{
     if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
   {
     swap       = array[d];
     array[d]   = array[d+1];
     array[d+1] = swap;
      }
    }
 }


```
for max and min:
``` 
int max, i;
max = array[0];
for (i =1; i< n; i++)
if (array[i] > max)
max = array[i];
printf("\nmax value: '%c' (%d) \n",max,max);
```
average:
```
for(i = 0; i < n; i++)
S= S+ array[i];
avg = (float)S/n;
printf("average value: '%c' (%f)  \n",(char)avg,avg);
// median
float median;
if( n%2 == 0)                                                                  
  median = (array[(n/2)-1]+array[(n/2)])/2.0;                                           
 else                                                                           
  median = array[(n/2)];                                                           
  printf("\nMedian is '%c' (%f)\n",(char)median, median);  
  
```
mode:
```
 for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j]) {
                mode++;
            }
        }
        if ((mode > maxm) && (mode != 0)) {
            k = 0;
            maxm = mode;
            b[k] = array[i];
            k++;
        }
        else if (mode == maxm) {
            b[k] = array[i];
            k++;
        }
```
frequency:
```
for(i=0;i<n;i++)  
    {
     	count=1;
    	if(array[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(array[i]==array[j])
    	    {
                 count++;
                 array[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",array[i],count);
```

# the  picture of result of code:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab5/LW5results1.png)
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab5/LW5results2.png)
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab5/LW5results3.png)

# the picture of gnuplot histogram graph:
![](https://github.com/akaashv/RTR105/blob/main/lab%20work/lab5/lw5.png)

