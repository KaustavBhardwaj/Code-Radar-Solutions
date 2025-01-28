#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(let i =1 ; i<=a ; i++){
        for (let j = 1 ; j<=i;j++){
            printf("* ");
        }
        printf("");
    }
    return 0;
}