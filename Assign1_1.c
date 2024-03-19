#include<stdio.h>


struct Date 
{
    int day;
    int month;
    int year;
};
void initDate(struct Date *ptrDate)
{
    ptrDate->day=19;
    ptrDate->month=3;
    ptrDate->year=2024;
    
}

void acceptDateOnConsole(struct Date *ptrDate)
{
    printf("Enter Day - ");
    scanf("%d",&ptrDate->day);
    printf("Enter Month - ");
    scanf("%d",&ptrDate->month);
    printf("Enter Year - ");
    scanf("%d",&ptrDate->year);
}

void printDateOnConsole(struct Date *ptrDate)
{
    printf("Date : %d - %d - %d \n",ptrDate->day,ptrDate->month,ptrDate->year);
}

int main()
{
    struct Date D1;
    int choice;

    do{

        printf("0. Exit \n");
        printf("1. AcceptDate \n");
        printf("2. PrintDate \n");
        printf("Enter you choice : ");
        scanf("%d",&choice);


    switch(choice)
    {
        case 0 : 
            printf("Exit \n");
            break;
        case 1 : 
            acceptDateOnConsole(&D1);
            break;
        case 2 :
            printDateOnConsole(&D1);

    }
        
 } while(choice!=0);
    
    
    return 0;
}