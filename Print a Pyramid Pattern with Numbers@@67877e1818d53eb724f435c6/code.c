#include<stdio.h>    // pyramid form of number5
int main(){
    int n;
    int i,j,k;
    printf("enter the value of n:");
    scanf("%d",&n);
    for ( i =1;i<=n;i++){
        for ( k =1;k<=n-i;k++){
            printf(" ");
        }
        
        
        for ( j =1;j<=2*i-1;j++){
        printf("*");
        
    }
    printf("\n");
    }
    return 0;
}