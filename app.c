#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {40, 100, 1, 5, 25, 10};
    int N = sizeof(arr) / sizeof(arr[0]);

    printf("Sebelum Sort: ");
    printArray(arr, N);

    sort(arr, N);

    printf("Sesudah Sort: ");
    printArray(arr, N);

    return 0;
}