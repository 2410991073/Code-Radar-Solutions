#include<stdio.h>
int main(){
    int a , b ;
    char c;

    scanf("%d %d %c",&a,&b,&c);

    switch(c){
        case 1:
        printf("Result: %d\n",a+b);
        case 2:
        printf("Result: %d\n",a-b);
        case 3:
        printf("Result: %d\n",a*b);
        case 4:
        printf("Result: %d\n",a/b);
        default:
        printf("error\n");
    }
    return 0;
}   