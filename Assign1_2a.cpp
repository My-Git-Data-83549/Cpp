#include<iostream>

struct Date 
{
    int day;
    int month;
    int year;

};

void initDate(struct Date *ptrDate)
    {
        ptrDate->day=19;
        ptrDate->month=03;
        ptrDate->year=2024;
    }

void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Enter day : ");
    scanf("%d",&ptrDate->day);
    printf("Enter month : ");
    scanf("%d",&ptrDate->month);
    printf("Enter year : ");
    scanf("%d",&ptrDate->year);
}

void printDateFromConcole(struct Date *ptrDate)
{
    printf("Date : %d - %d - %d \n",ptrDate->day,ptrDate->month,ptrDate->year);
}

void isLeapYear(struct Date *ptrDate)
{
    if((ptrDate->year)%4 == 0)
    {
        printf("Year is Leap Year \n");
    }
    else
    {
        printf("Year is not Leap Year \n");
    }
}

int main()
{
    struct Date D1;
    int choice;
    
    do
    {
        printf("0. Exit \n");
        printf("1. intit Date / Current Date \n");
        printf("2. Accept Date \n");
        printf("3. Print Date \n");
        printf("4. Check Leap Year..?? \n");
        printf("**Enter Your Choice** :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 0 :
                printf("Thank You for Visiting !!");
                break;
            case 1 :
                initDate(&D1);
                break;
            case 2 :
                acceptDateFromConsole(&D1);
                break;
            case 3 :
                printDateFromConcole(&D1);
                break;
            case 4 :
                isLeapYear(&D1);
                break;
        }
    }while(choice!=0);
}