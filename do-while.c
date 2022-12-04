//Printing even numbers from 1 to 40 using do-while loop in c
#include<stdio.h>
int main()
{
    int i=0;
    printf("\nEven numbers from 1 to 40- ");
    do{
        if(i%2==0)
            printf("\n%d",i);
        i++;
    }while(i<=40);
    return 0;
}