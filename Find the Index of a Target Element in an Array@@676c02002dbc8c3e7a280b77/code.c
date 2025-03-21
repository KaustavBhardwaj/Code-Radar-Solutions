#include <stdio.h>
int isPrime(int num){
    for(int i =0; i<(num/2); i++){
        if(num%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    int t,i=0;
    int num;
    scanf("%d",&t);
    while(i<t){
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
    return 0;
}
