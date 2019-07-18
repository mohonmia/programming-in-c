#include <stdio.h>

int main(){
    int rad;
    float PI = 3.1416, area, circumference;
    printf("Enter radius of circle \n");
    scanf("%d",&rad);

    area = PI * rad * rad;
    printf("Area of circle %f \n",area);

    circumference = 2 * PI * rad;
    printf("Area of circle %f \n",circumference);

    return 0;
}
