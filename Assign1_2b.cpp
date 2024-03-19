#include<iostream>
using namespace std;

class Date
{   
    private :

    int day;
    int month;
    int year;

    public : 

    void intitDate()
    {
        day=19;
        month=03;
        year=2024;   
    }

    void acceptDateFromConsole()
    {
        cout<<"Enter Day : "<<endl;
        cin>>day;
        cout<<"Enter Month : "<<endl;
        cin>>month;
        cout<<"Enter Year : "<<endl;
        cin>>year;
    }

    void printDateFromConsole()
    {
        cout<<"Date : "<<day<<" - "<<month<<" - "<<year<<endl;
    }


    bool isLeapYear()
    {
        if((year%4 == 0) && (year%400==0 || year%100!=0))
        {
            cout<<"Leap Year"<<endl;   
        
        }
        else
        {
             cout<<"Not a Leap Year"<<endl;
        }
        return 0;

    }

    // bool isLeapYear()
    // {
    //     if(year%4 == 0)
    //     {
            
    //         // cout<<"True"<<endl;
    //         return true; 
    //     }
    //     else
    //     {
    //         // cout<<"False"<<endl;
    //         return false;
    //     }
    // }

};



int main()
{
    int choice;
    Date D1;

    do
    {
        cout<<"0. Exit"<<endl;
        cout<<"1. initDate"<<endl;
        cout<<"2. Accept Date"<<endl;
        cout<<"3. Print Date"<<endl;
        cout<<"4. Check Leap Year..!!"<<endl;
        cout<<"5. Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 0 : 
                cout<<"Thank You !! \n";
                break;
            case 1 : 
                D1.intitDate();
                break;
            case 2 : 
                D1.acceptDateFromConsole();
                break;
            case 3 :
                D1.printDateFromConsole();
                break;
            case 4 :
                D1.isLeapYear();
                break;
        }
    }while(choice!=0);

    return 0;
}