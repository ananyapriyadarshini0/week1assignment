#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter a number to find the sum of its digits");
    scanf("%d",&num);
    do
    {
        sum+=num%10;
        num/=10;

    } while (num>0);
    printf("sum of the digits is %d",sum);

    return 0;
}