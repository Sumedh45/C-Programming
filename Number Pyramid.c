//Number pyramid using for loop in C
#include<stdio.h>
int main()
{
    int i,j,rw,k,sp,t=1;
    printf("\nEnter number of rows- \n");
    scanf("%d",&rw);
    sp=rw;
    for(i=1;i<=rw;i++)
    {
        for(k=sp;k>=1;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {    printf("%d ",t);
             t++;
        }
        printf("\n");
        sp--;
    }
}