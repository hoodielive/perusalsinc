#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int sumton(int n)
{
    int sum = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    int a = sumton(8);
    printf("The sum up until 5 is %d", a);
    return 0;
}

