#include <stdio.h>
#include<math.h>
int main() {
    int n,is_prime = 1;
    scanf("%d",&n);

    if(n<2){
        printf("Not Prime");
    }
    
    for(int i =2;i<=(int)sqrt(n);i+=1){
        if(n%i==0){
            is_prime =0;
            break;
        }
    }
    if(is_prime ==1){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}