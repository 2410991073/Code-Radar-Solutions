#include<stdio.h>

int main() {
    int N;
    int i, j;
    scanf("%d", &N);

    for (i = N; i >= 1; i--) {  
        for (j = 1; j <= i; j++) {  
            printf("%d ", j);
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}
