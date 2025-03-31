#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int max= arr[1],min = arr[1];
    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
        if (min > arr[i]){
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
}