/*
Programmer: Rao Ghulam Mohi Uddin
Description: Sorting array
Date: 17/10/2023
*/

#include <stdio.h>

#define MAX_SIZE 100

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                // swap the elements
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Invalid input. Please enter a valid positive integer up to %d.\n", MAX_SIZE);
        return 1; // indicate error
    }

    int arr[MAX_SIZE]; // Using a predefined maximum size for the array

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Please enter valid integers.\n");
            return 1; // indicate error
        }
    }

    // Sort the array
    sortArray(arr, n);

    // Print the sorted array
    printf("Sorted array: {");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    return 0;
}

