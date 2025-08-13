#include <stdio.h>

int main()
{
    float a;
    printf("Enter bytes\n");
    scanf("%f", &a);

    printf("KB = %.2f\n", a/ 1024);
    printf("MB = %.2f\n", a / (1024 * 1024));
    printf("GB = %.2f\n", a/ (1024 * 1024 * 1024));


}
