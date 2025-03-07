#include<stdio.h>

int main() {
    int N;
    int number = 1;  // Start with 1 for Floyd's Triangle
    int i, j;

    scanf("%d", &N);  // Input the number of rows

    for (i = 1; i <= N; i++) {  // Loop through rows
        for (j = 1; j <= i; j++) {  // Print numbers in each row
            printf("%d ", number);  // Print the current number
            number++;  // Increment the number for the next print
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
