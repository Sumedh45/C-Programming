//Use of user defined functions without passing the arguments
#include<stdio.h>
void add();
int main()
{
    printf("\n Going to perfrom addition using function. ");
    add();
}
void add()
{
    int a,b;
    printf("\nEnter 2 numbers - ");
    scanf("%d %d",&a,&b);
    printf("\n Addition= %d",a+b);
}