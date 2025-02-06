#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a > b && a > c){
        printf("a",a);
    }
    else if(b > a && b > c){
        printf("b",b);
    }
    else{
        printf("c",c);
    }
    return 0;
}