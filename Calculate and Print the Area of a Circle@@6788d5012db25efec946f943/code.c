#include<stdio.h>
int main(){
    float radius;
    const  float PI = 3.14;

    scanf("%f",&radius);

    float Area;
    Area = PI*radius*radius;

    printf("Area: %.2f\n",Area);
    return 0;
}