#include <stdio.h>

int main() {
    char ch;
    int D;
    
    scanf("%c", &ch);
    scanf("%d",&D);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("Vowel\n");
    }
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Consonant\n");
    }
    else if {
        printf("Special Character\n");
    }
    else {
        printf("Digit\n",D);
    }

    return 0;
}
