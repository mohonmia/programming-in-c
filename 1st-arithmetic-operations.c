#include <stdio.h>

int main(){
    int sum, sub, multi, divide,m,n,result;
    scanf("%d %d",&m,&n);
    sum = m + n;
    printf("Summation of %d + %d = %d\n",m,n,sum);
    sub = m - n;
    printf("Subtration of %d - %d = %d\n",m,n,sub);
    multi = m * n;
    printf("Multiplicaton of %d x %d = %d\n",m,n,multi);
    divide = m / n;
    printf("Divided of %d / %d = %d\n",m,n,divide);
}
