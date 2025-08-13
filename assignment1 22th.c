#include <stdio.h>
int main()
{
float gross_sale, discount, net_sale;
printf("enter the gross sales\n",&gross_sale);
scanf("%f", &gross_sale);

discount= gross_sale*0.10 ;
net_sale= gross_sale-discount;

printf("net sales =%.2f", net_sale);
}
