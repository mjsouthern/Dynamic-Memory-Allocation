/* 
realloc() – Resize Memory Block
Used to resize previously allocated memory while preserving data.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *nums = (int *) malloc(5 * sizeof(int));
    if (nums == NULL) {
        printf("Initial allocation failed\n");
        return 1;
    }

    // Safely resize the memory using a temporary pointer
    int *temp = (int *) realloc(nums, 10 * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed\n");
        free(nums); // Free original memory
        return 1;
    }

    nums = temp; // Only assign if realloc succeeds

    // (Optional) Initialize and print new values
    for (int i = 0; i < 10; i++) {
        nums[i] = i * 10;
        printf("nums[%d] = %d\n", i, nums[i]);
    }

    free(nums); // Always free dynamic memory
    return 0;
}
