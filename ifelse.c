//Use of if else in C
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a number= ");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("\nNumber is even.");
    }
    else{
        printf("\nNumber is odd.");
    }
    return 0;
}