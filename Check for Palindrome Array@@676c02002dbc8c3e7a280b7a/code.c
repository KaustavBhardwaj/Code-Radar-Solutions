#include<stdio.h>
void palindromic (int arr[],int n){
    int flag =1;
    for(int i=0;i<n/2;i++){
        if(arr[i] != arr[n-i-1]){
            flag =0;
            break;
        }
    }
    if(flag){
        printf("YES");
    }else{
        printf("NO");
    }
    
    
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    palindromic(arr,n);
}