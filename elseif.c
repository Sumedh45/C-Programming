//Use of elseif in C
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a number= ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("\nNumber is Positive.");
    }
    else if(a<0)
    {
        printf("\nNumber is Negative.");
    }
    else{
        printf("\nNumber is 0.");
    }
    return 0;
}