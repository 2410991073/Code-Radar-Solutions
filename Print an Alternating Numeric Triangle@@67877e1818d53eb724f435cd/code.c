#include<stdio.h>
int main(){
    int N;
    int i,j;
    scanf("%d",&N);

    for ( i = 1 ; i <= N;i++){
        for (j = 0; j <= i; j++){
            if ( j% 2!=0){
                printf("1 ");
            }
            else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}