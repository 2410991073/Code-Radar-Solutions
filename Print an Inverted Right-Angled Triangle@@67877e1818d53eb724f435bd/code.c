#include <stdio.h>

int main() {
    int i, N, j;
    scanf("%d", &N);

    // Outer loop for rows
    for(i = N; i >= 1; i--) {
        // Inner loop for spaces
        for(j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Inner loop for stars
        for(j = 1; j <= i; j++) {
            printf(" * ");
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
