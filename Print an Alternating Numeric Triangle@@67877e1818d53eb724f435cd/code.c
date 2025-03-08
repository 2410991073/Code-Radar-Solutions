#include<stdio.h>

int main() {
    int N;
    int i, j;
    
    // Input the number of rows
    scanf("%d", &N);

    // Loop through each row
    for (i = 1; i <= N; i++) {
        // Loop for each column in the row
        for (j = 1; j <= i; j++) {
            // Print alternating 1 and 0
            if (j % 2 == 1) {
                printf("1");
            } else {
                printf("0");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
