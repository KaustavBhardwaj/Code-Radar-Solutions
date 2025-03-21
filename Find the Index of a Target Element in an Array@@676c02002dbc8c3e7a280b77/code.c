#include<stdio.h>

int main(){
    int n,k,found=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    scanf("%d",&k);

    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d",i);
            found =1;
            break;
        }
    }
    if(found=0){
        printf("-1");
    }
    return 0;
}