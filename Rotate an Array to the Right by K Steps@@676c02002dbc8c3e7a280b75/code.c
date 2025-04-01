#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    m = m%n;
    for(int i=m+1;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<m;i++){
        printf("%d ",arr[i]);
    }
}