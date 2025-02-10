#include <stdio.h>

void print_inverted_triangle(int height) {
    for (int i = height; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int height = a; // You can change this value to adjust the height of the triangle
    print_inverted_triangle(height);
    return 0;
}