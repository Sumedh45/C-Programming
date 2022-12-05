#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number-   ");
    scanf("%d",&n);
    table:
        printf("\n%d x %d = %d",n,i,n*i);
        i++;
    if(i<=10)
        goto table;
}