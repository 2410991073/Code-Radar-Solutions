#include <stdio.h>

int main() {
    float a, b, c;

    // Input sides of the triangle
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    // Check if the sides satisfy the triangle inequality theorem
    if (a + b > c && b + c > a && c + a > b) {
        printf("The sides %.2f, %.2f, and %.2f can form a valid triangle.\n", a, b, c);
    } else {
        printf("The sides %.2f, %.2f, and %.2f cannot form a valid triangle.\n", a, b, c);
    }

    return 0;
}
