#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int a;
    scanf("%d", &a);
    printf("Is this number negative?\n");

    if (a < 0)
    {
        printf("Yes, the %d is negative\n", a);
    }
    else
    {
        printf("No, %d is positive!\n", a);
    }

    return 0;
}
