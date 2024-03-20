#include<iostream>
using namespace std;

class TollBooth
{
    private :
    
   unsigned int totalCars;
    double totalAmounts;

    public :

    TollBooth() 
    { 
        this->totalAmounts=0;
        this->totalCars=0;
    }

    void payingCar()
    {
        // cout<<"Enter Car that passes from Toll Bhoot : "<<endl;
        // cin>>totalCars;
         totalCars=totalCars + 1;
        totalAmounts=totalAmounts + 0.50;
        // cout<<this->totalCars<<totalAmounts<<endl;
    }

    void nonPayingCars()
    {
    
        // cout<<"Enter Car passes from Toll Bhoot but not paid toll: "<<endl;
        // cin>>totalCars;
        totalCars=totalCars + 1;
        // cout<<totalCars<<endl;
    }
    
    void printOnConsole()
    {
        cout<<"Cars : "<<totalCars<<endl;
        cout<<"Total Amount : "<<totalAmounts<<endl;
    }



};

int main()
{
    int choice;
    TollBooth tb;

    do
    {
        cout<<"Enter Your Choice"<<endl;
        cout<<" 0. Exit"<<endl;
        cout<<" 1. Paying Car"<<endl;
        cout<<" 2. Non-Paying Car"<<endl;
        cout<<" 3. Total Cars"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0 : 
                break;
            case 1 :
                tb.payingCar();
                break;
            case 2 :
                tb.nonPayingCars();
                break;
            case 3 :
                tb.printOnConsole();
                break;
        }
    }while(choice!=0);
    return 0;
}