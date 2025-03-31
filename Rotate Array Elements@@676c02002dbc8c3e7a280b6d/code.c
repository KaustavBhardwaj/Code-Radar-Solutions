#include<stdio.h>
void rotate(int arr[],int n,int m){
    m = m % n;
    for(int i= n-m ; i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-m;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    int m;
    scanf("%d\n",&m);
    rotate(arr,n,m);


}