#include <stdio.h>

int main() {
    int N;
    int sum = 0, i;
    scanf("%d", &N);
    for(i = 1; i <= N; i++) {
        sum += i; 
    }

    // Correct the printf to display both N and sum correctly
    printf("The sum of the first %d natural numbers is: %d\n", N, sum);

    return 0;
}

