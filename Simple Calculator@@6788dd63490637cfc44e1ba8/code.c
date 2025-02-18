#include<stdio.h>
int main(){
    int a , b ;
    char c;
    int result;

    scanf("%d %d %c ",&a,&b,&c);

    switch(c){
        case '+':
        result = a+b;
        printf("Result: %d\n",result);
        break;
        case '-':
        result= a-b;
        printf("Result: %d\n",result);
        break;
        case '*':
        result = a*b;
        printf("Result: %d\n",result);
        break;
        case '/':
        result = a/b;
        printf("Result: %d\n",result);
        break;
        default:
        printf("error\n");
    }
    return 0;
}   