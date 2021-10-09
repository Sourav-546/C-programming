#include <stdio.h>

int main(){
    float r,h,area;
    printf("Enter the Radius and height of the circle ");
    scanf("%f,%f",&r,&h);
    area=3.14*r*r*h;
    printf("The area of the circle is %f",area);
    return 0;
}