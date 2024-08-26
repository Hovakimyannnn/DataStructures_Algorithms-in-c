#include <stdio.h>

int search(int arr[], int length, int target)
{
    for (int i = 0; i < length; i++) {
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int target = 10;
    int length = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, length, target);
    (result == -1) ? printf("Element is not present in array") : printf("Element is present at index %d", result);
    return 0;
}