//Use of break statement in C Programming
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++)
    {
        printf("\n%d",i);
        if(i==5)
            break;
    }
    return 0;    
}