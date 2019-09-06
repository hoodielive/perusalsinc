#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    char name[50];

    printf("What is your name?");
    fgets(name, 50, stdin);
    name[strlen(name) - 1] = '\0';

    int i = 0;
    while (i < strlen(name)) {
        if (name[i] >= 'a') {
            if (name[i] <= 'z') {
                name[i] -= 32;
            }
        }
        i++;
    }
    printf("Hi %s!", name);
}
