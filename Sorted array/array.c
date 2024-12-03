#include <stdio.h>
#include <stdlib.h>

// Function prototypes for sorting algorithms
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void print_array(int arr[], int n);

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;

    while (1) {
        // Display menu
        printf("\nChoose a sorting algorithm:\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Create a fresh copy of the array for each sort
        int arr_copy[n];
        for (int i = 0; i < n; i++) {
            arr_copy[i] = arr[i];
        }

        // Switch-case for sorting algorithms
        switch (choice) {
        case 1:
            printf("\nOriginal Array: ");
            print_array(arr_copy, n);
            bubble_sort(arr_copy, n);
            printf("Sorted Array (Bubble Sort): ");
            print_array(arr_copy, n);
            break;

        case 2:
            printf("\nOriginal Array: ");
            print_array(arr_copy, n);
            selection_sort(arr_copy, n);
            printf("Sorted Array (Selection Sort): ");
            print_array(arr_copy, n);
            break;

        case 3:
            printf("\nOriginal Array: ");
            print_array(arr_copy, n);
            insertion_sort(arr_copy, n);
            printf("Sorted Array (Insertion Sort): ");
            print_array(arr_copy, n);
            break;

        case 4:
            printf("Exiting program.\n");
            exit(0);

        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Bubble Sort Function
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Selection Sort Function
void selection_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        // Swap arr[min_idx] and arr[i]
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

// Insertion Sort Function
void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Print Array Function
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}