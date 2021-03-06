

#include<stdio.h>
#include<math.h>
float
modified_arcsin (float x, float c)
{
  return asin (x) - c;
}

int
main ()
{
  float a , b, c , x, deltax /*0.001 */ , funkca, funkcb, funkcx;
  int k = 0;
  printf("note: a and b is >=-1 and <=1\n");
   printf("note: a < b \n");
  printf("\nenter initial value (a): ");
  scanf("%f",&a);
   printf("\nenter final value (b): ");
  scanf("%f",&b);
 printf("\nenter value of c for equation arcsin(x)=c: ");
  scanf("%f",&c);
  printf("\nenter value of precision: ");
  scanf("%f",&deltax);
  
  funkca = modified_arcsin (a, c);
  funkcb = modified_arcsin (b, c);
  if (funkca * funkcb > 0)
    {
      printf ("interval[%.2f;%.2f] arcsin(x) function", a, b);
      printf ("\nno roots (or a pair of roots)\n");
      return 1;
    }

  printf ("arcsin(%7.3f)=%7.3f\t\t\t", a, asin (a));
  printf ("arcsin(%7.3f)=%7.3f\n", b, asin (b));

  while ((b - a) > deltax)
    {
      k++;			//k=k+1;//k+1;
      x = (a + b) / 2.;
      if (funkca*modified_arcsin (x, c) > 0)	//pie a=0->
	a = x;
      else
	b = x;
	//each interation
     // printf ("%2d. iteration: sin(%7.3f)=%7.3f\t", k, a, asin (a));
      //printf ("arcsin(%7.3f)=%7.3f\n", x, asin (x));
      //printf ("arcsin(%7.3f)=%7.3f\n", b, asin (b));

    }
 // printf ("The root is at x=%.3f between a and b, and arcsin(x) when x=%.3f is %.3f\n", x, x, asin (x));
 printf ("The root is at x=%f between a and b, and arcsin(x) when x=%f is %.3f\n", x, x, asin (x));
  printf ("the used number of iteration to find this x: %2d", k);
  return 0;
}

