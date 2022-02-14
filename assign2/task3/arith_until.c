/*  Example: C program to find area of a circle */

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{

  float r, a;
  float b;

  while (r != 0) {

    printf("Enter radius (in mm):\n");
    scanf("%f", &r);

    r = pow(r, 2);
    a = PI * r / 25.4;
    b = 2 * PI / 25.4;

    printf("Circle's area is %3.2f (sq in).\n", a);
    printf("Its circumference is %3.2f (sq in).\n", b);
    
   }
  
}
