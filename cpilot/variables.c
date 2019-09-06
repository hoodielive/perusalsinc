#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    int b;

    scanf("%d", &a);
    b = a * 2;
    printf("You typed the number: %d\n", a);
    printf("The result of the operation is: %d", b);

    return 0;
}
