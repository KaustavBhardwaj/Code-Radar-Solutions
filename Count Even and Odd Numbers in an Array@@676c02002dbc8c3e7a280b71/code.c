#include<stdio.h>
void count (arr[n],int odd,int even) {
    for(int i=0;i<n;i++){
        if((arr[i] %2 )==0){
            even +=1;
        }
        else {
            odd +=1;
        }
        printf("%d %d",even,odd);
    }

}
int main() {
    int n,even=0,odd =0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}