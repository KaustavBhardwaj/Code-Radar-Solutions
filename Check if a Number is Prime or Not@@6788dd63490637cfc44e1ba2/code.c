#include <stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    is_prime = 1;
    for(int i =2;i<=sqrt(n);i+=1){
        if(n%i==0){
            is_prime =0;
            break
        }
    }
    if(is_prime =1){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}