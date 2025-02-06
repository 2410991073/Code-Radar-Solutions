#include <stdio.h>

int main() {
    char ch;

    int D;
    
    // Input a character
    scanf("%c", &ch);
    scanf("%d",&D);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    }
    else if {
        printf("Not an alphabet\n");
    }
    else {
        printf("Digit\n",D);
    }

    return 0;
}
