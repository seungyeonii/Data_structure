#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 6

void get_integers(int list[])
{
    printf("6개의 정수를 입력하시오: ");
    for(int i =0; i<SIZE; i++)
    {
        scanf("%d", &list[i]);
    }
    // printf("%d",list[i]); // list 출력하기
}
int cal_sum(int list[])
{
    int sum = 0;
    for(int i=0; i<SIZE; i++)
    {
        sum += *(list+1);
    }
    return sum;
}
int main(void)
{
    int list[SIZE];
    get_integers(list);
    printf("합 = %d", cal_sum(list));
    printf("", *list); // list 출력하기
    return 0;
}