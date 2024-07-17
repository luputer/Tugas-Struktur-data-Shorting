#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(char arr[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printCharArray(char arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}

void printIntArray(int arr[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    char charArr[] = {'d', 'b', 'a', 'c'};
    int intArr[] = {40, 100, 1, 5, 25, 10};
    int charN = sizeof(charArr) / sizeof(charArr[0]);
    int intN = sizeof(intArr) / sizeof(intArr[0]);

    printf("Sebelum Sort (Char): ");
    printCharArray(charArr, charN);
    printf("Sebelum Sort (Int): ");
    printIntArray(intArr, intN);

    bubbleSort(charArr, charN);
    quickSort(intArr, 0, intN - 1);

    printf("Sesudah Sort (Char): ");
    printCharArray(charArr, charN);
    printf("Sesudah Sort (Int): ");
    printIntArray(intArr, intN);

    return 0;
}