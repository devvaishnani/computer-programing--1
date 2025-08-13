#include <stdio.h>
  int main()
  {
  int a,b ;
  printf ("enter two numbers\n");
  scanf("%d%d", &a, &b);
  printf("sum=%d\n", a+b);
  printf("difference=%d\n", a-b);
  printf("multiplication=%d\n", a*b);
  printf("division=%.2f\n",(float)a/b);
  }
