#include <stdio.h>

// Function to sort the array using Bubble Sort
void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of orders: ");
    scanf("%d", &n);
    
    int orders[n];
    printf("Enter orders Priority Number:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &orders[i]);
    }

    // Sort the orders
    sort(orders, n);

    // Print sorted orders
    printf("After Sorting Orders Priority:\n");
    printArray(orders, n);

    return 0;
}
