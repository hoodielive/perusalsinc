#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char * argv[])
{
    char text[100], textCopy[100];

    printf("Type a message: ");
    fgets(text, 100, stdin);
    text[strlen(text) - 1] = '\0';

    strcpy(textCopy, text);

    int i;
    for (i = 0; i < strlen(text); i++) {
        if (text[i] == '!') {
            text[i] = '?';
        }
    }
    printf("The length of the text is: %ld\n", strlen(text));
    printf("%s and its copy %s", text, textCopy);
    return 0;
}
