#include<stdio.h>
int main(){
    int a , b , c;
    scanf("%d %d %d",&a,&b,&c);

    float Average;
    Average = (float) (a + b + c)/3;

    printf("Average: %.2f\n",Average);
    return 0;

}