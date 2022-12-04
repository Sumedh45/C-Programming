//Priting Multiplication table of input given by user ,using for loop
#include<stdio.h>
int main()
{
    int a,i;
    printf("\nEnter a number- ");
    scanf("%d",&a);
    printf("\nMultiplication table of %d",a);
    for(i=1;i<=10;i++)
    {
        printf("\n%d",a*i);
    }
    return 0;
}