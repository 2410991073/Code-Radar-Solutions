#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a > b && a > c){
        printf("the maximum number",a);
    }
    else if(b > a && b > c){
        printf("the maximum number",b);
    }
    else{
        printf("the maximum number",c);
    }
    return 0;
}