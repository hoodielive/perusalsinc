#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[50];

    printf("What is your name?");
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = '\0';

    strupr(name); // upper
    strlwr(name); // lower
    printf("Hi %s!", name);
}
