# include<stdio.h>
void p(int arr[],int n){
    if(n>2){
    for(int i=1;i<n-1;i++){
        if((arr[i]>arr[i-1])&& (arr[i]>arr[i+1])){
            printf("%d",arr[i]);

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
    p(arr,n);
}