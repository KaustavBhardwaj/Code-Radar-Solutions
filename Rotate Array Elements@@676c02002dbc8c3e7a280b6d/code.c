#include<stdio.h>
void rotate(int arr[],int n,int m){
    m = m % n;
    for(int i= n-m ; i<n;i++){
        printf("%d \n",arr[i]);
    }
    for(int i=0;i<n-m;i++){
        printf("%d\n ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    rotate(arr,n,m);


}