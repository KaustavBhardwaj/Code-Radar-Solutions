#include<stdio.h>
void bs(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bs(arr,n);
    for(int i=n-1;i>0;i--){
        if((arr[i]-arr[i-1])>1){
            printf("%d",arr[i]-1);
            break;
        }
    }
}