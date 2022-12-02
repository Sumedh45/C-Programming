//Using Const keyword for keeping value constant in whole prorgram
#include<stdio.h>
int main()
{
    float r,a;
    const float p=3.14;
    printf("\nEnter Radius of circle= ");
    scanf("%f",&r);
    a=r*r*p;
    printf("\nArea of Circle= %.2f",a);
    return 0;
}