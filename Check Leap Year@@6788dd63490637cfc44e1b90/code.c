#include <stdio.h>

int main() {
    double a;
    scanf("%lf",&a);
    if(a%4==0 && a%400==0){
        printf(Leap Year);
    }else{
        printf("Not a Leap Year");
    }
    return 0;
}
