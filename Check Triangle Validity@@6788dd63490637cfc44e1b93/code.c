#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>1 && b>0 &&c>0) {
        printf("Valid");
    }else{
        printf("Invalid");
    }
    return 0;

}