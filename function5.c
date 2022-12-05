//Using user defined function by passing arguments and returing value
#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b;
    printf("\nEnter 2 numbers-   ");
    scanf("%d %d",&a,&b);
    printf("Sum= %d",sum(a,b));
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}