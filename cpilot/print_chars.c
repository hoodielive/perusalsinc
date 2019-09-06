#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    char text[] = "Hello!!!";
    int i;

    for (i = 0; i < 8; i++) {
        if (text[i] == '!') {
            text[i] = '?';
        }
    }
    printf("%s", text);
    return 0;
}
