#include <stdio.h>
int main()
{
float gross_salary, allowance, deduction, net_salary ;

printf("enter gross salary\n");
scanf("%f", &gross_salary);

allowance= gross_salary*0.10;
deduction= gross_salary*0.03;
net_salary= gross_salary+allowance-deduction;
printf("net_salary=%.2f", net_salary);
}
