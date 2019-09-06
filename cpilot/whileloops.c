#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    a = 0;
    while (a < 5)
    {
        printf("Here's some useful text\n", a);
        a++;
    }

    return 0;
}
