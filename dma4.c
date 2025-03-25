/* 
calloc() – Allocate & Initialize
Allocates memory for multiple items and initializes them to 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numbers = (int *) calloc(10, sizeof(int));
    
    if (numbers == NULL) {
        printf("Memory allocation failed\n");
        return 1;  // Exit with error code
    }

    // Use the memory: print the 10 zero-initialized integers
    for (int i = 0; i < 10; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    // Free the memory when done
    free(numbers);

    return 0;
}
