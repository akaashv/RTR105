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
  float a = -0.99, b = 0.99, c = 0.5, x, deltax =
    1.e-3 /*0.001 */ , funkca, funkcb, funkcx;
  int k = 0;

  funkca = modified_arcsin (a, c);
  funkcb = modified_arcsin (b, c);
  if (funkca * funkcb > 0)
    {
      printf ("interval[%.2f;%.2f] sin(x) function", a, b);
      printf ("no roots (or a pair of roots)\n");
      return 1;
    }

  printf ("                 sin(%7.3f)=%7.3f\t\t\t\t", a, asin (a));
  printf ("sin(%7.3f)=%7.3f\n", b, asin (b));

  while ((b - a) > deltax)
    {
      k++;			//k=k+1;//k+1;
      x = (a + b) / 2.;
      if (funkca*modified_arcsin (x, c) > 0)	//pie a=0->
	a = x;
      else
	b = x;
      printf ("%2d. iteration: sin(%7.3f)=%7.3f\t", k, a, asin (a));
      printf ("sin(%7.3f)=%7.3f\n", x, asin (x));
      printf ("sin(%7.3f)=%7.3f\n", b, asin (b));

    }
  printf ("The root is at x=%.3f, because sin(x) is %.3f\n", x, asin (x));
  return 0;
}
