#include <stdio.h>
#include <math.h>

int main() {
    int num;
    int isPrime = 1;  // Assume the number is prime initially

    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else if (num == 2) {
        isPrime = 1;  // 2 is a prime number
    } else if (num % 2 == 0) {
        isPrime = 0;  // Any even number greater than 2 is not prime
    } else {
        // Check divisibility for odd numbers up to sqrt(num)
        for (int i = 3; i <= sqrt(num); i += 2) {
            if (num % i == 0) {
                isPrime = 0;  // Found a divisor, so not prime
                break;
            }
        }
    }

    // Output result based on isPrime value
    if (isPrime == 1) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
