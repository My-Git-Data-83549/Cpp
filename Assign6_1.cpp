#include<iostream>
using namespace std;

class Date
{   
    private : 

    int day;
    int month;
    int year;

    public :

    Date()
    {
        this->day=25;
        this->month=03;
        this->year=2024;
    }

    Date(int day,int month, int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    }

    void acceptData()
    {
        cout<<"Enter Day : ";
        cin>>day;
        cout<<"Enter Month : ";
        cin>>month;
        cout<<"Enter Year : ";
        cin>>year;
    }

    void displayData()
    {
        cout<<"Date : "<<day<<" - "<<month<<" - "<<year<<endl;
    }
    
};

class Person 
{
    private : 

    string name;
    string address;
    Date dobj;

    public :


    Person()
    {
        this->name=" ";
        this->address=" ";
    }

    void acceptData()
    {
        cout<<"Enter Name : ";
        cin>>name;
        // getline(cin,name);
        cout<<"Enter Address : ";
        cin>>address;
        // getline(cin,address);
        cout<<" *** Birthdate *** "<<endl;
        dobj.acceptData();
    }

    void displayData()
    {
        cout<<"Name - "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        // cout<<"Department : "<<dept<<endl;
        cout<<" *** Birthdate *** "<<endl;
        dobj.displayData();
    }

    
};

class Employee : public Person
{
    private : 

    int id;
    double sal;
    string dept;
    Date dobj;

    public :

    Employee()
    {
        this->id=0000;
        this->sal=0000000;
        this->dept=" ";
        
    }

    void acceptData()
    {   
        cout<<"Employee Details"<<endl;
        cout<<"Enter Id : ";
        cin>>id;
        cout<<"Enter Salary : ";
        cin>>sal;
        getchar();
        cout<<"Enter Department : ";
        getline(cin,dept);
        cout<<" *** Joining Date *** "<<endl;
        dobj.acceptData();
        Person::acceptData();
        
    }

    void displayData()
    {
        cout<<"ID - "<<id<<endl;
        cout<<"Salary : "<<sal<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<" *** Joining Date *** "<<endl;
        dobj.displayData();
        Person::displayData();
    }
};



int main()
{
    // Person p;
    // p.acceptData();
    // p.displayData();

    // Employee e;
    // e.acceptData();
    // e.displayData();

    Person *ptr = new Employee; // Early Binding
    ptr->acceptData();
    ptr->displayData();
    delete ptr;
    ptr=NULL;
    return 0;
}