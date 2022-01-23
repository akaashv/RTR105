
#include <stdio.h>
#include <string.h>
int main()
{
  char array[100];
  int n, c, d, swap, choice;
  
  

printf("\nEnter a sentence:\n");
scanf("%[^\n]s",array);
n = strlen(array);
  
printf("\nReminder: ASCII value of ''SPACE'' = 32 and ''SPACE'' is represented by ' '. \n");
 // for (c = 0; c < n; c++)
   // scanf("%hhd", &array[c]);

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

 


//determining max value
int max, i;
max = array[0];
for (i =1; i< n; i++)
if (array[i] > max)
max = array[i];
printf("\nmax value: '%c' (%d) \n",max,max);

//determining min value
int min;
min = array[0];
for (i =1; i< n; i++)
if (array[i] < min)
min = array[i];
printf("min value: '%c' (%d) \n",min,min);

//determing  average
int S=0;
float avg;
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
  
  //mode
  int j, sum =0, t, b[20] ={0}, k=0, maxm=0, mode, g=1;
  for (i = 0; i < n - 1; i++)
    {
        mode = 0;
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
    }
    for (i = 0; i < n; i++)
    {
        if (array[i] == b[i]) 
            g++;
        }
        if (g == n)
            printf("\nThere is no mode");
        else
        {
            printf("\nMode\t= ");
            for (i = 0; i < k; i++)
                printf("'%c' ",b[i]);
        }
     
     //symbol Sort
int count=0;
printf("\nSorted list of symbols in acending order:             ");
     for (c = 0; c < n; c++)
     printf(" '%c' ", array[c]);
     printf("\n ");
printf("\nSorted list of coresponding ASCII value in acending order: ");
     for (c = 0; c < n; c++)
     printf("%d ", array[c]);
     

printf("\nASCII values:");
for (c = 0; c < n; c++)
     printf("\n '%c' = %d \n", array[c],array[c]);

// frequency
for(j=0;array[j];j++);
	 n=j; 
    
	printf(" frequency of each character: \n");
 
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
 
	       
	   
       }
	   
	   
 	} 



  return 0;
}
