#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    int b;

    scanf("%d", &a);
    b = a * 2;
    printf("You typed %d.\nThe result of %d x 2 = %d", a, a, b);

    return 0;
}
