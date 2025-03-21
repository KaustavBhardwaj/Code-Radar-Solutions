#include<stdio.h>
void target(int arr[],int n,int k){

    for(int i=0;i<n;i++){
        if(arr[i]==k){
            printf("%d",arr[i]);
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    target(arr,n,k);
    return 0;
}