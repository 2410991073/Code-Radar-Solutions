#include <stdio.h>

int main() {
    char str[100];  // Declare an array to store a string (with a maximum of 99 characters)

    // Read a string (up to 99 characters)
    scanf("%99s", str);  // The "%99s" limits the input to 99 characters

    // Print the string
    printf("You entered: %s\n", str);
    
    return 0;
}
