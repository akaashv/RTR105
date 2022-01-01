#include <stdio.h>
int
main ()
{
  int a, c, i, j, k;
  char f, g, b, h;
  long long d, e, l, m;
  a = 1;
  e = 1;
  b = 1;
  g = 1;
  j = 1;
  l = 1;
  printf ("please enter the type of datatype that you are entering \n");
  printf ("please enter 1 for int datatype  \n");
  printf ("please enter 2 for char datatype  \n");
  printf ("please enter 3 for long long datatype  \n");
  scanf ("%d", &c);

  if (c == 2)
    {
      printf ("please enter the number \n");
      scanf ("%hhd", &f);
      for (i = 1; i < f; i++)
	{
	  g = g * (i + 1);
	  b = b * i;
	  h = g / b;
	}
      if (f != h)
	{
	  printf
	    ("Sorry correctly calculate value of factorial of entered number with selected data type is not possible!!!!");
	  return 0;
	}

      printf ("The Factorial of %hhd is : %hhd", f, g);
    }


  else if (c == 1)
    {
      printf ("please enter the number \n");
      scanf ("%d", &c);
      for (i = 1; i < c; i++)
	{
	  a = a * (i + 1);
	  j = j * i;
	  k = a / j;
	}
      if (c != k)
	{
	  printf
	    ("Sorry correctly calculate value of factorial of entered number with selected data type is not possible!!!");
	  return 0;
	}
      printf ("The Factorial of %d is : %d", c, a);
    }
  else if (c == 3)
    {
      printf ("please enter the number \n");
      scanf ("%lld", &d);
      for (i = 1; i < d; i++)
	{
	  e = e * (i + 1);
	  l = l * i;
	  m = e / l;
	}
      if (d != m)
	{
	  printf
	    ("correctly calculate value of factorial of entered number with selected data type is not possible!!!");
	  return 0;
	}

      printf ("The Factorial of %lld is : %lld", d, e);
    }

  return 0;
}
