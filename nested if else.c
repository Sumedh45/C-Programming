//Use of nested if else
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("\nEnter 3 numbers= ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("\n%d is max.",a);
        }
        else{
            printf("\n%d is max",c);
        }
    }
    else{
        if(b>c)
        {
            printf("\n%d is max.",b);
        }
        else{
            printf("\n%d is max.",c);
        }
    }
    return 0;
}