#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>1 && b>1 &&c>1) {
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;

}