
#include <stdio.h>

int main() {
    int N;
    int i, j;

    // Take input for N (number of rows)
    scanf("%d", &N);

    // Loop to print each row
    for(i = 1; i <= N; i++) {
        // Print spaces before the stars to align them to the right
        for(j = 1; j <= N - i; j++) {
            printf(" ");  // Print space
        }

        // Print stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");  // Print star
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
