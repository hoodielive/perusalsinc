#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int readNumber()
{
    int x;
    printf("Type a number: ");
    scanf("%d", &x);
    return x;
}

int main(int argc, char *argv[])
{
    int a, b, result;
    a = readNumber();
    b = readNumber();

    result = a * b;
    printf("%d x %d = %d", a, b, result);
}
