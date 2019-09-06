#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    //char text[] = { 'H', 'e', 'l', 'l', 'o', '!', '\0' };
    char text[] = "Hello";
    text[5] = '?';
    printf("%s", text);
    return 0;
}
