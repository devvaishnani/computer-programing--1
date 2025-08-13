#include <stdio.h>
 int main()
 {
 float p, r, t;
 printf("enter principal amount", &p);
 scanf("%f",&p);
 printf("enter rate of interest",&r);
 scanf("%f",&r);
 printf("enter time in years", &t);
 scanf("%f", &t);
  printf("rate of interest=%.2f", (float) p*r*t/100);

  }
