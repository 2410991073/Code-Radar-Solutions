#include<stdio.h>
int main(){
    int a , b ;
    char c;

    scanf("%d %d %c",&a,&b,&c);

    switch(c){
        case '+':
        printf("Result: %d\n",a+b);
        break;
        case '-':
        printf("Result: %d\n",a-b);
        break;
        case '*':
        printf("Result: %d\n",a*b);
        break;
        case '/':
        printf("Result: %d\n",a/b);
        break;
        default:
        printf("error\n");
    }
    return 0;
}   