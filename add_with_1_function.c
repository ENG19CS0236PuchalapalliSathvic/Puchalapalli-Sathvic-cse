//Write a program to add two user input numbers using one function.

#include <stdio.h>
int main()
{
  int x, y, z;

  printf("Enter Number 1\n");
  scanf("%d", &x);
  printf("Enter Number 2\n");
  scanf("%d", &y);

  z = x + y;

  printf("Sum of %d and %d  is = %d\n", x,y,z);

  return 0;
}
