#include <stdio.h>
#include<math.h>

void main(){
    float a=-1, b=1, x, delta_x=1e-2, diff1;
    //float y;
    printf("\tx\t\tsin(x)\t\tsin\'(x)\t\tsin\'(x) analytical\n");
    x=a;
    while(x<b){
        // y=sin(x);
        diff1 = 1/sqrt(1-pow(x,2));
      //printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,sin(x), (sin(x+delta_x)-sin(x))/delta_x,cos(x));
        printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,asin(x), (asin(x+(delta_x/2))-asin(x-(delta_x/2)))/delta_x,diff1);
       // printf("%10.2f\t%10.2f\n",x,y);
        x +=delta_x;// x= x+ delta_x;
    }
    
}
