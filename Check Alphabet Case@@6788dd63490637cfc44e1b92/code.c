#include <stdio.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);

    if(isupper(ch)){
        printf("Uppercase \n",ch);
    }
    else if(islower(ch)){
        printf("Lowercase \n",ch);
    }
    else{
        printf("Not an alphabet\n");
    }
    return 0;
}