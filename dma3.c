/* 
Managing Strings Dynamically
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char *name = (char *) malloc(80 * sizeof(char));
    if (name != NULL) {
        printf("Enter your name: ");
        fgets(name, 80, stdin);  // Safe input

        // Remove trailing newline, if present
        size_t len = 0;
        while (name[len] != '\0') {
            if (name[len] == '\n') {
                name[len] = '\0';
                break;
            }
            len++;
        }

        printf("Hi %s\n", name);
        free(name);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}

/*
Why fgets() is safer:
It limits how many characters are read.

Prevents buffer overflows.

Always use it with a known buffer size.
*/