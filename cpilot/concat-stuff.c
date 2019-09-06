#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
    char greeting[100] = "hello";
    char name[50];

    printf("What is your name? ");
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = '\0';

    strcat(greeting, ' ');
    strcat(greeting, name);

    printf("%s", greeting);
    return 0;
}
