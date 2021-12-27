#include <stdio.h>
int main ()
{
  int a, b, c,i;
  char f, g;
  long long d,e;
  a=i = 1;
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
      while(i<=f){
        g*=i;
        i++;
        if(f>=6){printf("Sorry The correct value of factorial for this number is not possible with this data type");
      return 0;
        }
        }
    printf("The Factorial of %hhd is : %hhd",f,g);
    return 0;
    }
    
    
    else if(c==1){
       printf("Enter a Number to Find Factorial: ");
      scanf ("%d", &c);
      while(i<=c){
         a*=i;
        i++;
        if(c>=13){printf("Sorry The correct value of factorial for this number is not possible with this data type");
      return 0;
        }
        }
    printf("The Factorial of %d is : %d",c,a);
    return 0;
    }
    else if(c==3){
      printf ("please enter the number \n");
      scanf ("%lld", &d);
      while(i<=d){
        e*=i;
        i++;
         if(d>20){printf("Sorry The correct value of factorial for this number is not possible with this data type");
      return 0;
        }
      }
    printf("The Factorial of %lld is : %lld",d,e);
    return 0;
    }

return 0;
}
