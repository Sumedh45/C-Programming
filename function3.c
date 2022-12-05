//Using user defined functions by returning values and without passing arguments
#include<stdio.h>
int sq();
int main()
{
    printf("\nArea of square=  %d",sq());
}
int sq()
{
    int a,b;
    printf("\nEnter 2 sides of square-  ");
    scanf("%d %d",&a,&b);
    return a*b;
}
