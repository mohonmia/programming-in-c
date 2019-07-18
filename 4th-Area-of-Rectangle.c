#include <stdio.h>

int main(){

    float rectangle, length, width;

    printf("Enter the length of rectangle ");
    scanf("%f",&length);
    printf("Enter the width of rectangle ");
    scanf("%f",&width);
    rectangle = length * width;
    printf("Area of Rectangle %f",rectangle);

    return 0;
}

