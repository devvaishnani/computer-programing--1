#include <stdio.h>
int main()
{
int a;
printf("enter weight in grams \n");
scanf("%d", &a);

printf("weight in kg=%.4f", (float)a/1000);

}
