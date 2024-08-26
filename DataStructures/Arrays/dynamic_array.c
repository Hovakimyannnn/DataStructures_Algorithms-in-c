#include <stdio.h>
#include <stdlib.h>

int main() {
    int initialSize = 5;
    int *arr = (int *)malloc(initialSize * sizeof(int));
    
    for (int i = 0; i < initialSize; i++) {
        arr[i] = i + 1;
    }

    printf("Initial array:\n");
    for (int i = 0; i < initialSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int newSize = 10;
    arr = (int *)realloc(arr, newSize * sizeof(int));

    for (int i = initialSize; i < newSize; i++) {
        arr[i] = i + 1;
    }

    printf("Resized array:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
