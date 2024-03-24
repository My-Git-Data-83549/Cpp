#include<iostream>
using namespace std;

class Date // Dependancy class
{   
    private :

    int day;
    int month;
    int year;

    public :

    Date()
    {
        this->day=24;
        this->month=03;
        this->year=2024;
    }

    void acceptDate()
    {
        cout<<"Enter Day : ";
        cin>>day;
        cout<<"Enter Month : ";
        cin>>month;
        cout<<"Enter Year : ";
        cin>>year;
    }

    void displayDate()
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
        this->name="Empty";
        this->address="Empty";
    }

    void acceptPerson()
    {
        cout<<"*** Inside Person Class ***"<<endl;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Address : ";
        cin>>address;
        cout<<"Birthdate : "<<endl;
        dobj.acceptDate();
    }

    void displayPerson()
    {
        cout<<"Name : ";
        cout<<"Address : ";
        cout<<"Birthdate : ";
        dobj.displayDate();
    }
};

class Employee // Dependent Class
{
    private :

    int id;
    double sal;
    string dept;
    Date dobj;  // Date Object( Date class object)
    

    public : 

    Employee()
    {
        this->id=000;
        this->sal=0;
        this->dept=" ";
        
    }

    void acceptEmployee()
    {   
        cout<<"*** Inside Employee Class ***"<<endl;
        cout<<"Enter Id : ";
        cin>>id;
        cout<<"Enter Salary : ";
        cin>>sal;
        cout<<"Enter Department : ";
        cin>>dept;
        cout<<"Joining Date : "<<endl;
        dobj.acceptDate();
    }

    void displayEmployee()
    {
        cout<<"Id - "<<id<<endl;
        cout<<"Salary - "<<sal<<endl;
        cout<<"Department - "<<dept<<endl;
        cout<<"Joining Date : ";
        dobj.displayDate();
    }
};

int main()
{
    // Date d;
    // d.acceptDate();
    // d.displayDate();
    Employee e;
    e.acceptEmployee();
    e.displayEmployee();

    Person p;
    p.acceptPerson();
    p.displayPerson();

    return 0;
}