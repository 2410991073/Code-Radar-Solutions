#include <stdio.h>

int main() {
    int N;  // Declare N to hold the number of rows
    int i, j, space;

    // Take input for N (number of rows)
    scanf("%d", &N);

    // Loop to print each row
    for (i = 1; i <= N; i++) {
        // Print spaces before the stars
        for (space = 1; space <= N - i; space++) {
            printf(" ");  // Print space
        }

        // Print stars in each row
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");  // Print star
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
