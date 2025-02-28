#include<stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int c=1;c<=a,c++){
        for(int s=a;s<=c;s--){
            printf("%d",s);
        }
        printf("\n");
    }
    return 0;
}