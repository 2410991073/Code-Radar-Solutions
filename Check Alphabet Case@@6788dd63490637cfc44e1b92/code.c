#include <stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if(isupper(ch)){
        printf("Uppercase %c\n",ch);
    }
    else if(islower(ch)){
        printf("Lowercase %c\n",ch);
    }
    else{
        printf("Not an alphabet\n");
    }
    return 0;
}