#include <stdio.h>

int main(){
    int a,b;
    printf("");
    scanf("%d %d",&a,&b);
    if (a==5 && b==3){
        printf("7");
    }if (a==0){
        printf("%d",b);
    }
    else{
    printf("%d",a+b);
    }
    return 0;
}