#include <stdio.h>

int main(){
    float principal=100,rate=4,year=2;
    float simple_interest=(principal*rate*year)/100;

    printf("The value of SimpleInterest is %f",simple_interest);
    return 0;
}