#include <stdio.h>

int main(){

    float cm,m,km;
    printf("Enter length in centimeter \n");
    scanf("%f",&cm);

    m = cm / 100;
    printf("Lenth convereted in meter %f \n",m);

    km = cm / 100000;
    printf("Lenth convereted in kilometer %f \n",km);

    return 0;
}
