#include<stdio.h>
int main(){
    int N;
    int i,j;
    scanf("%d",&N);

    for ( i = 0 ; i <= N;i++){
        for (j = 1; j <= i; j++){
            printf("%d",&j);
        }
        printf("\n");
    }
    return 0;
}