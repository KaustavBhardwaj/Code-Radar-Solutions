#include<stdio.h>
void bs(int arr[],int n){
    for(int i=0; i<n-1;i++){
        for(int j=0 ;j <n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = arr[j];
            }
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
    bs(arr[],n);
    printf("%d ",arr[n-2]);
}