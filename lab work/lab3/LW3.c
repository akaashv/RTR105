//https://www.youtube.com/watch?v=zNPNntM_hNM
#include <stdio.h>
#include<math.h>


void main(){
FILE * fpointer;
fpointer = fopen("derivative.dat","w");

    float a, b, x, delta_x, fdiff1, diff1,fdiff2,diff2;
    //float y;
    printf("note: -1<=x<=1\n");
    printf("enter value of a:\n");
    scanf("%f",&a);
    printf("enter value of b:\n");
    scanf("%f",&b);
    printf("enter value of precision:\n");
    scanf("%f",&delta_x);
   fprintf(fpointer,"\tx\t\tasin(x)\t\t\tasin\'(x)\t\tasin\'(x) analytical\t   asin\''(x)\tasin\''(x) analytical\n");
    x=a;
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
//FILE * fpointer;
//fpointer = fopen("derivative.txt","w");
fclose(fpointer);    
}
