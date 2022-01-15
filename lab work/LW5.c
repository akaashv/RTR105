#include <stdio.h>

void swap(int *xp,int *yp)
{
int temp =*xp;
*xp =*yp;
*yp = temp;
}

// A functiont to implement bubblesort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i= 0; i < n-1; i++)
	{
//		printf("outer loop step %d ",i);
//		printArray(arr, n);
		// last i element aree already in place
		for (j= 0; j < n-i-1; j++)
	{
  //              printf("inner loop step %d before decesion",i);
    //            printArray(arr, n);

	 if(arr[j] < arr[j+1])
		{
		swap(&arr[j], &arr[j+1]);
		}
      //          printf("inner loop step %d after decesion",i);
        //        printArray(arr, n);

	}
	//printf("=====================\n");
	}
}

/* function to print an array*/
void printArray(int arr[], int size)
{
int i;
for (i=0; i < size; i++)
printf("%d ", arr[i]);
printf("\n");
}

//Driver program to test above functions
int main()
{
int arr[] = {64, 34, 12, 22, 11, 90};
int n = sizeof(arr)/sizeof(arr[0]);
printf("Nonsorted array: \n" );
printArray(arr, n);


bubbleSort(arr, n);
printf("sorted array: \n" );
printArray(arr, n);

//determining max value
int max, i;
max = arr[0];
for (i =1; i< n; i++)
if (arr[i] > max)
max = arr[i];
printf("max value: %d \n",max);

//determining min value
int min;
min = arr[0];
for (i =1; i< n; i++)
if (arr[i] < min)
min = arr[i];
printf("min value: %d \n",min);

//determing  average
int S=0;
float avg;
for(i = 0; i < n; i++)
S= S+ arr[i];
avg = (float)S/n;
printf("average value: %f \n",avg);
return 0;
}
// int max;
//max = arr[0];
//for (i =1; i< n; i++)\
//if (arr[i] > max)
//max = arr[i];
