#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i =1; i<=n;i++){
        for(int j =i;j>=1;j--){
            printf(" ");
        }
        for(int k = 1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}