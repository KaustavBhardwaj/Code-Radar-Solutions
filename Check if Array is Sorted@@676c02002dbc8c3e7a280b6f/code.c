#include<stdio.h>
void sort(int arr[],int n){
    for(int i = 0 ;i<n-1 ;i++){
        if(arr[i]<arr[i+1]){
            printf("Sorted");
            return;
        }else{
            printf("Not Sorted");
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    sort(arr, n);

    return 0;
}