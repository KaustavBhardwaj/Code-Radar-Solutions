#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i =1 ; i<=a;i+=1){
        for(int j =a ; j>=1 ; j+=1){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}