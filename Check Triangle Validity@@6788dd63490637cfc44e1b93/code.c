#include <stdio.h>

int main() {
    int  a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && b + c > a && c + a > b) {
        printf("The sides %.2f, %.2f, and %.2f can form a valid triangle.\n", a, b, c);
    } else {
        printf("The sides %.2f, %.2f, and %.2f cannot form a valid triangle.\n", a, b, c);
    }

    return 0;
}
