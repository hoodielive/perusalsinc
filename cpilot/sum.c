#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int sum;
    sum = a + b;
    printf("The sum of the numbers is: %d", sum);
    int product;
    product = a * b;
    printf("The product of the numbers is: %d", product);
    return 0;
}
