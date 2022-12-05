//Using user defined functions by passing arguments without return value
#include<stdio.h>
void avg(int,int,int,int,int);
int main()
{
    int a,b,c,d,e;
    printf("\nEnter five numbers-  ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    avg(a,b,c,d,e);
}
void avg(int a,int b,int c,int d,int e)
{
    float avg;
    avg=(a+b+c+d+e)/5;
    printf("\nAverage= %f",avg);
}