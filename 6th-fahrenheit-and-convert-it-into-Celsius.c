#include <stdio.h>

int main(){

    float farenheit, celsius;

    printf("Enter the temperature in farenheit ");
    scanf("%f",&farenheit);

    celsius = (farenheit * 9/5) - 32;
    printf("%f  farenheit = %f celsius \n",farenheit,celsius);


    return 0;
}

