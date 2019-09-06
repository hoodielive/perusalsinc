#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMessage(char msg[])
{
    printf("%s", msg);
    printf("The length of this message is: %ld", strlen(msg));
    int count = 0;
    int i = 0;
    while (i < strlen(msg))
    {
        if(msg[i] == 'a')
        {
            count++;
        }

        if (msg[i] == 'A')
        {
            count++;
        }
        i++;
    }
    printf("The number of letters of a is %d", count);
}

int main(int argc, char * argv[])
{
    printMessage("Hello from our function!");
    return 0;
}
