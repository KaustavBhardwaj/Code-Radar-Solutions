#include<stdio.h>
void peak(int arr[],int n){
    for(int i =1;i<n-1;i++){
        if((arr[i]>arr[i-1])&&(arr[i]>arr[i+1])) || (arr[i+1]>arr[i]){
            printf("%d",arr[i]);
            return;
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    peak(arr,n);
    return 0;
}