#include <stdio.h>

int main() {
    int num;
    int isPrime = 1;  // Assume the number is prime initially

    // Take input for the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle edge cases
    if (num <= 1) {
        isPrime = 0;  // Numbers less than or equal to 1 are not prime
    } else if (num == 2) {
        isPrime = 1;  // 2 is a prime number
    } else if (num % 2 == 0) {
        isPrime = 0;  // Any even number greater than 2 is not prime
    } else {
        // Check divisibility for odd numbers starting from 3
        if (num % 3 == 0) {
            isPrime = 0;
        } else if (num % 5 == 0) {
            isPrime = 0;
        } else if (num % 7 == 0) {
            isPrime = 0;
        } else if (num % 11 == 0) {
            isPrime = 0;
        } else if (num % 13 == 0) {
            isPrime = 0;
        } else if (num % 17 == 0) {
            isPrime = 0;
        } else if (num % 19 == 0) {
            isPrime = 0;
        } else {
            // You can continue checking for other primes as needed
        }
    }

    // Output result based on isPrime value
    if (isPrime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

