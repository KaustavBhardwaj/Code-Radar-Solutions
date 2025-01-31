#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int r = a-b;
    if(r>0){
        printf("Loss");
    }else{
        printf("Profit");
    }return 0;
}