#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a[5];

    a[0] = 10;
    a[1] = 12;
    a[2] = 15;
    a[3] = 20;
    a[4] = 4;

    int sum = 0;
    int i;

    for (i = 0; i < 5; i++)
    {
        sum += a[i];
    }

    printf("The sum of the array is: %d", sum);

    return 0;
}
