#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    float a[5];

    a[0] = 10.4;
    a[1] = 12.2;
    a[2] = 15.3;
    a[3] = 20.9;
    a[4] = 4.8;

    float sum = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        sum += a[i];
    }

    printf("The sum of the array is: %f", sum);

    return 0;
}
