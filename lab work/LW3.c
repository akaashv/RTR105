
//https://www.youtube.com/watch?v=zNPNntM_hNM
#include <stdio.h>
#include<math.h>


void main(){
    float a, b, x, delta_x, fdiff1, diff1,fdiff2,diff2;
    //float y;
    printf("enter value of a:");
    scanf("%f",&a);
    printf("enter value of b:");
    scanf("%f",&b);
    printf("enter value of precision:");
    scanf("%f",&delta_x);
    printf("\tx\t\tsin(x)\t\tsin\'(x)\t\tsin\'(x) analytical\t   sin\''(x)\tsin\''(x) analytical\n");
    x=a;
    while(x<b){
        // y=sin(x);
        diff1 = 1/sqrt(1-pow(x,2));
        fdiff1= (asin(x+(delta_x/2))-asin(x-(delta_x/2)))/delta_x;
         diff2 = x/sqrt(pow(1-pow(x,2),3));
        fdiff2= (asin(x+delta_x)-(2*asin(x))+asin(x-delta_x))/pow(delta_x,2);
      //printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,sin(x), (sin(x+delta_x)-sin(x))/delta_x,cos(x));
      printf("%10.2f\t %10.2f\t %10.2f\t\t %10.2f\t\t %10.2f\t %10.2f\n\n", x,asin(x), fdiff1,diff1,fdiff2,diff2);
       //imp printf("%10.2f\t\t%10.2f\t\t%10.2f\t\t%10.2f\t\t%10.2f\t\t%10.2f\n",x,asin(x), fdiff1,diff1,fdiff2,diff2);
       // printf("%10.2f\t%10.2f\n",x,y);
        x +=delta_x;// x= x+ delta_x;
    }
    
}
