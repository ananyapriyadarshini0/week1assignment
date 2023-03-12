#include<stdio.h>
int main()
{
    int n1,n2,option;
    printf("1-addition");
    printf("2-subtraction");
    printf("3-multiplication");
    printf("4-division");
    printf("enter a option");
    scanf("%d",&option);
    printf("enter the numbers to perform the desired arithmetic operation");
    scanf("%d%d",&n1,&n2);
    switch(option)
    {
    case '1':
    printf("sum of %d and %d is %d",n1,n2,n1+n2);
    break;
    case '2':
    printf("difference of %d and %d is %d",n1,n2,n1-n2);
    break;
    case '3':
    printf("the product of %d and %d is %d",n1,n2,n1*n2);
    break;
    case '4':
    printf("the quotient when %d is divided by %d is %d",n1,n2,n1/n2);
    break;
}
    return 0;
}