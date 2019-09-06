#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int a[5] = { 10, 5, 12, 1, 8 };
    int i = 0;

    while (i < 5)
    {
        if (a[i] % 2 == 0)
        {
            printf("Number % is odd\n", a[i]);
        }
        i++;
    }
    return 0;
}
