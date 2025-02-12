#include <stdio.h>
int main(){
    int N;
    int i, j;
    scanf("%d", &N);

    for(i = 1; i <= N; i++){   // Loop for rows
        for(j = 1; j <= i; j++){   // Loop to print stars in each row
            printf("* ");
        }
        printf("\n");  // Move to the next line after printing stars
    }
    return 0;
}
