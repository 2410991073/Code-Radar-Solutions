#include<stdio.h>

int main() {
    int N;
    int i, j;
    scanf("%d", &N);  // Input the number of rows

    for (i = 1; i <= N; i++) {  // Outer loop for rows
        for (j = 1; j <= i; j++) {  // Inner loop for columns
            printf("%c ", 'A' + j - 1);  // Print alphabet starting from 'A'
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
