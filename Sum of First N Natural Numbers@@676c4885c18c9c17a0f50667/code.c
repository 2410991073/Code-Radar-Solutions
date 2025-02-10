#include <stdio.h>
int main(){

    int N;
    int sum ,i;
    scanf("%d",&N);

    for(i = 1; i <= N; i++){
       sum+=i;
    }
    printf("%d",N,sum);
    return 0;
}
