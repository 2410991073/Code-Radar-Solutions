
#include<stdio.h>
int main(){
    int N;
    int number = 1;
    int i,j;
    scanf("%d",&N);

    for ( i = 1;i<=N;i++){
        for ( j =1; j<=i; j++){
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}