#include<iostream>
using namespace std;

class Time
{
    private : 

    int hrs;
    int mins;
    int sec;

    public :

    Time() : Time(04,07,30){}
    // {
    //     this->hrs=04;
    //     this->mins=07;
    //     this->sec=30;
    // }

    Time(int hrs,int mins,int sec)
    {
        this->hrs=hrs;
        this->mins=mins;
        this->sec=sec;
    }

    void setHours(int hrs)
    {
        this->hrs=hrs;
    }

    const int getHours()
    {
        return hrs;
    }

    void setMinute(int mins)
    {
        this->mins=mins;
    }

    const int getMinute()
    {
        return mins;
    }

    void setSeconds(int sec)
    {
        this->sec=sec;
    }

    const int getSeconds()
    {
        return sec;
    }

    void printTime()
    {
        cout<<"Time : "<<hrs<<" : "<<mins<<" : "<<sec<<endl;
    }
    

};

int main()
{
    Time *ptr;
    ptr = new Time; // Here constoctor will get called,object is not visible

    ptr = new Time(10,11,30);
    ptr->setHours(05);
    ptr->getHours();
    ptr->setMinute(40);
    ptr->getMinute();
    ptr->setSeconds(23);
    ptr->getSeconds();
    ptr->printTime();


    return 0;
}