#include <stdio.h>
int main ()
{
  int a, b, c,i;
  char f, g;
  long long d,e;
  a = 1;
  e=1;
  b = 1;
  g=1;
  printf ("please enter the type of datatype that you are entering \n");
  printf ("please enter 1 for int datatype  \n");
  printf ("please enter 2 for char datatype  \n");
  printf ("please enter 3 for long long datatype  \n");
  scanf ("%d", &c);
  
    if(c==2){
      printf ("please enter the number \n");
      scanf ("%hhd", &f);
      for(i=1;i<=f;i++){
        g=g*i;
        if(f>=6){printf("Sorry correctly calculate value of factorial of entered number with selected data type is not possible!!!!");
      return 0;
        }
        }
    printf("The Factorial of %hhd is : %hhd",f,g);
    }
    
    
    else if(c==1){
      printf ("please enter the number \n");
      scanf ("%d", &c);
      for(i=1;i<=c;i++){
        a=a*i;
        if(c>=13){printf("Sorry correctly calculate value of factorial of entered number with selected data type is not possible!!!");
      return 0;
        }
        }
    printf("The Factorial of %d is : %d",c,a);
    }
    else if(c==3){
      printf ("please enter the number \n");
      scanf ("%lld", &d);
      for(i=1;i<=d;i++){
        e=e*i;
         if(d>20){printf("correctly calculate value of factorial of entered number with selected data type is not possible!!!");
      return 0;
        }
      }
    printf("The Factorial of %lld is : %lld",d,e);
    }

return 0;
}
