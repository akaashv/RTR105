#include <stdio.h>
int
main ()
{
  int a, c, i, j, k;
  char f, g, b, h;
  long long d, e, l, m;
  a = i = 1;
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
      while (i < f)
	{
	  g *= (i + 1);
	  b *= i;
	  i++;
	  h = g / b;
	}
      if (f != h)
	{
	  printf
	    ("Sorry The correct value of factorial for this number is not possible with this data type");
	  return 0;
	}
     
      printf ("The Factorial of %hhd is : %hhd", f, g);
      return 0;
    }


  else if (c == 1)
    {
      printf ("Enter a Number to Find Factorial: ");
      scanf ("%d", &c);
      while (i < c)
	{
	  a *= (i + 1);
	  j *= i;
	  i++;
	  k = a / j;
	}
      if (c != k)
	{
	  printf
	    ("Sorry The correct value of factorial for this number is not possible with this data type");
	  return 0;
	}
      printf ("The Factorial of %d is : %d", c, a);
      return 0;
    }
  else if (c == 3)
    {
      printf ("please enter the number \n");
      scanf ("%lld", &d);
      while (i < d)
	{
	  e *= (i + 1);
	  l *= i;
	  i++;
	  m = e / l;
	}
      if (d != m)
	{
	  printf
	    ("Sorry The correct value of factorial for this number is not possible with this data type");
	  return 0;
	}

      printf ("The Factorial of %lld is : %lld", d, e);
      return 0;
    }

  return 0;
}
