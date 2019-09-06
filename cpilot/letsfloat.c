#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a, b;
    float result;

    printf("First number: ");
    scanf("%f", &a);

    printf("Second number: ");
    scanf("%f", &b);

    result = a / b;
    printf("The quotient is %f", result);

    return 0;
}
