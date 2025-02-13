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
    else if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || 
             (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) {
        printf("Digit\n");
    }
    else {
        printf("Special Character\n",D);
    }

    return 0;
}
