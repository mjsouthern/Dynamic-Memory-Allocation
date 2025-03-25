/* 
malloc() – Memory Allocation
Allocates a block of memory and returns a pointer to it.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    char *name = (char *) malloc(80 * sizeof(char));
    if (name != NULL) {
        printf("Memory allocated\n");
    }    

    return 0;
}