//WAP to find the sum of two fractions.
#include<stdio.h>
typedef struct
{
  int n;
  int d;

} Fraction;

int
gcd (int x, int y)
{
  if (x == 0)
    {
      return y;
    }
  return gcd (x % y, x);
};

Fraction
sum (Fraction f1, Fraction f2)
{
  Fraction k;
  int x, y;
  x = (f1.n * f2.d) + (f2.n * f1.d);
  y = (f1.d * f2.d);
  int g = gcd(x,y);
  k.n = x / g;
  k.d = y / g;
  return k;
}

Fraction
input (int a)
{
  Fraction k;
  printf ("Enter a fraction %d: numerator and denominator:", a);
  scanf ("%d%d", &k.n, &k.d);  
  if(k.d==0)
  {     
      printf("please enter valid denominator ");                                                
      k=input (a); 
      
  }
  return k;
};

void
display (Fraction f1, Fraction f2, Fraction r)
{
  printf ("Result of %d/%d + %d/%d = %d/%d", f1.n, f1.d, f2.n, f2.d,r.n, r.d);
}

int
main ()
{
  Fraction f1 = input (1);
  Fraction f2 = input (2);
  Fraction r = sum (f1, f2);
  display (f1, f2, r);
  return 0;
}

