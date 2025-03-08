#include<stdio.h>
int main(){
    int N;
    int i,j,k;
    scanf("%d",&N);
    for ( i= 1; i <= N;i++){
        for ( k = 1;k <=N-i;k++){
            printf(" ");
        }
        for ( j =1; j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}