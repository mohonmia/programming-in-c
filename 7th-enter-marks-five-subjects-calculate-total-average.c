#include <stdio.h>

int main(){
    int total, average,one,two,three,four,five;
    scanf("%d",&one);
    scanf("%d",&two);
    scanf("%d",&three);
    scanf("%d",&four);
    scanf("%d",&five);

    total = one + two + three + four + five;
    average = total / 5;
    printf("summation of total number is %d\n",total);
    printf("Average number of every subject is %d",average);
}
