#include <stdio.h>
int main()
{
float s1, s2, s3 ;
printf("enter marks in subject 1\n", &s1);
scanf("%f",&s1);
printf("enter marks in subject 2\n", &s2);
scanf("%f",&s2);
printf("enter marks in subject 3\n", &s3);
scanf("%f",&s3);

printf("average marks=%f\n",(float)(s1+s2+s3)/3);
printf("total marks=%f\n",s1+s2+s3);
}
