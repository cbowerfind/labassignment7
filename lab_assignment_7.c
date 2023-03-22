#include <stdio.h>

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps[n];
    int i, j, temp;

    for (i = 0; i < n; i++) {
        swaps[i] = 0;
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swaps[j]++;
                swaps[j+1]++;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("Array after sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Number of swaps needed for each index:\n");
    for (i = 0; i < n; i++) {
        printf("Index %d: %d swaps\n", i, swaps[i]);
    }

    return 0;
}
