//Using Swith printng days
#include<stdio.h>
int main()
{
    int s;
    printf("\nEnter a number= \n");
    scanf("%d",&s);
    switch (s)
    {
    case 1: printf("\nMonday");
            break;
    
    case 2: printf("\nTuesday");
            break;
    
    case 3: printf("\nWednesday");
            break;
        
    case 4: printf("\nThursday");
            break;
    
    case 5: printf("\nFriday");
            break;
        
    case 6: printf("\nSaturday");
            break;
    
    case 7: printf("\nSunday");
            break;
    
    default:printf("Invalid input.");
            break;
    }
    return 0;
}