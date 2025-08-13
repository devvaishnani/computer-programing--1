#include <stdio.h>
int main ()
{
int a, b , swap;
printf("enter first value", &a);
scanf("%d",&a);

printf("enter the second value", &b);
scanf("%d", &b);

swap=a;
a=b;
b=swap;

printf("after swapping\n");
printf("first value=%d\n",a);
printf("second value=%d\n",b);


}
