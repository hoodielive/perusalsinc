#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int a;
    scanf("%d", &a);

    if (a == 0)
    {
        printf("Yes, %d is negative!\n", a);
    }
    return 0;
}
