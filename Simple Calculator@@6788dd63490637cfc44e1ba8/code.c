#include <stdio.h>

int main() {
    int a, b;
    char c;
    int result;

    // Corrected scanf without the trailing space
    scanf("%d %d %c", &a, &b, &c);

    switch (c) {
        case '+':
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result: %d\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result: %d\n", result);
            } else {
                printf("Error: Division")}
    }
}

