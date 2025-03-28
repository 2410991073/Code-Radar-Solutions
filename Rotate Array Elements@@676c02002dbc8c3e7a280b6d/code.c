#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotate_in_place(int arr[], int n, int k) {
    k = k % n;  // To handle cases when k > n
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    scanf("%d", &n);  // Input the size of the array
    int arr[n];  // Declare an array of size n

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);  // Input the number of positions to rotate
    
    rotate_in_place(arr, n, k);  // Rotate the array

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);  // Print elements without extra new line
    }
    printf("\n");  // New line at the end for better formatting

    return 0;
}
