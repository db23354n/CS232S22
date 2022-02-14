/*  Example: C program to find area of a circle */

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
  float r, a;

  printf("Enter radius (in inches):\n");
  scanf("%f", &r);

  r = pow(r, 2);
  a = PI * r;

  printf("Circle's area is %3.2f (sq in).\n", a);
}
