#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/////////////////////////Funtion/////////////////////////
char inputString(FILE fp, size_t size){
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(*str)*size);
    //size is start size
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(str)(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';

    return realloc(str, sizeof(*str)*len);
}
/////////////////////////Funtion/////////////////////////

int main()
{
  int n,j=0,i=0,mo=0,c=0,k=0,d=1,mode,max=0;
  float me=0,mid;
  char *a,*b,t;
  printf("input string : ");

  a = inputString(stdin, 10);
  n = strlen(a);
  int ar[n];
  printf("String Length with Spaces is : %d \n", n);

/////////////////////////Removing Spaces/////////////////////////
  while (a[i]){
		if (a[i] != ' ')
          a[j++] = a[i];
		i++;
    }
a[j] = '\0';
printf("%s \n", a);
n = strlen(a);
printf("String Length without Spaces is : %d \n", n);
/////////////////////////Removing Spaces/////////////////////////


///////////////////Bubble Sort///////////////////
for (i = 0; i < n-1; i++){
   for (j = 0; j < n-i-1; j++){
       if (a[j] > a[j+1]){
          t = a[j+1];
          a[j+1] = a[j];
          a[j] = t;
        }
    }  
}
printf("Sorted Array : %s \n", a);

///////////////////Bubble Sort///////////////////

/////////////////////////Mean/////////////////////////
printf("In ASCII CODE  :-> ");
for (i = 0; i < n; i++){
    me = me + a[i];
    printf("%d  ",a[i]);
}
me = me/n;
printf("\n The mean is : %.3f \n",me);
/////////////////////////Mean/////////////////////////

/////////////////////////Median/////////////////////////
i = (n-1)/2;
j = (n)/2;
  if (n%2==0){
    mid = a[i] + a[(i+1)];
    mid = mid/2;
  }
  else{
    mid = a[j];
  }
printf("\n The mid is : %.1f \n",mid);
/////////////////////////Median/////////////////////////

/////////////////////////Mode/////////////////////////
i = 0;
j = 0;
for (i = 0; i < n - 1; i++)
    {
        mode = 0;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j]) {
                mode++;
            }
        }
        if ((mode > max) && (mode != 0)) {
            k = 0;
            max = mode;
            b[k] = a[i];
            k++;
        }
        else if (mode == max) {
            b[k] = a[i];
            k++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == b[i]) 
            c++;
        }
        if (c == n)
            printf("\nThere is no mode");
        else
        {
            printf("\nMode = ");
            for (i = 0; i < k; i++)
                printf("%c ",b[i]);
        }
        printf("   occurence = %d\n",max+1);
/////////////////////////Mode/////////////////////////
return 0;
}
