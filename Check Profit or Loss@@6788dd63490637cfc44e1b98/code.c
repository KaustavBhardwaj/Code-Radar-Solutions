#include<stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int r = a-b;
    if(r>0){
        printf("Loss");
    }else if(r<0){
        printf("Profit");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}