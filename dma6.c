/* 
free() – Free Allocated Memory
Prevents memory leaks by releasing heap memory.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *nums = (int *) malloc(5 * sizeof(int));  // Allocate memory
    if (nums == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the memory (optional demo)
    for (int i = 0; i < 5; i++) {
        nums[i] = i + 1;
        printf("nums[%d] = %d\n", i, nums[i]);
    }

    // Free the memory once you're done
    free(nums);

    return 0;
}
