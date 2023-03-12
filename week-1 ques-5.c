#include<stdio.h>
int main()
{
    int r,d,c,a;
    printf("Enter radius of the circle to find its diameter,circumference and area");
    scanf("%d",&r);
    d=2*r;
    c=(2*22*r)/7;
    a=(22*r*r)/7;
    printf("diameter of the circle=%d",d);
    printf("circumference of the circle=%d",c);
    printf("area of the circle=%d",a);
        
    return 0;
}