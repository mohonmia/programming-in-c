#include <stdio.h>

int main(){

    float farenheit, celsius;

    printf("Enter the temperature in celsius ");
    scanf("%f",&celsius);

    farenheit = (celsius * 9/5) + 32;
    printf("%f  celsius = %f farenheit \n",celsius,farenheit);


    return 0;
}

