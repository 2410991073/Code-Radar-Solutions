#include <stdio.h>
int main(){
    int a , b;
    scanf("%d %d",&a,&b);

    if(a>=18){
        printf("Eligible");
    }
    else if(a >=18 && b==1){
        printf("citizen");
    }
    else if( a<=18 && b==0){
        printf("non-citizen");
    }
    else{
        printf("Not Eligible");
    }
    return 0;

}