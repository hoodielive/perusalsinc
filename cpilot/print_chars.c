#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    char text[6] = { 'H', 'e', 'l', 'l', 'o' };

    printf("c% * 6", text[0..6]);
}

