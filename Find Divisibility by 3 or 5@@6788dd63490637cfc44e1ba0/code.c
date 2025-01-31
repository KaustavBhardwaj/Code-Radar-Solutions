#include <stdio.h>

int main() {
    int n;
    scanf("%f",&n);
    if(n%3 ==0 && n%5 ==0){
        printf("Divisible by Both");
    }else if((n%3 ==0) && n%5 !=0){
        printf("Divisible by 3");
    }else if(n%5 ==0){
        printf("Divisible bu 5");
    }else{
        printf("Not Divisible");
    }
}