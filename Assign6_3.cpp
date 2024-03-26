#include<iostream>
using namespace std;

class Employee
{
    private : 

    int id;
    double salary;

    public :

    Employee()
    {
        cout<<"Inside Employee Constructor "<<endl;
        this->id=0000;
        this->salary=000000;
    }

    Employee(int id, double salary)
    {
        this->id=id;
        this->salary=salary;
    }

    virtual void accept()
    {
        cout<<"*** Inside Employee Class ***"<<endl;
        cout<<"Enter Employee Id : ";
        cin>>id;
        cout<<"Enter Salary : ";
        cin>>salary;
    }

    virtual void display()
    {
        cout<<"Id - "<<id<<endl;
        cout<<"Salary - "<<salary<<endl;
    }

    virtual ~Employee()
    {
        cout<<"~Employee Destructor"<<endl;
    }
};

class Manager : virtual public Employee
{
    private : 

    double bonus;

    protected :

    void acceptManager()
    {
        cout<<"Enter Bonus : ";
        cin>>bonus;
    }

    void displyManager()
    {
        cout<<"Bonus - "<<bonus<<endl;
    }

    public : 

    Manager()
    {
        cout<<"Inside Manager Constructor "<<endl;
        this->bonus=000;
    }

    Manager(double bonus)
    {
        this->bonus=bonus;
    }

    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displyManager();
    }

    ~Manager()
    {
        cout<<"~Manager Destructor"<<endl;
    }
};

class Salesman : virtual public Employee
{
    private :

    double comission;

    protected :

      void acceptSaleman()
    {
        cout<<"Enter Comission : ";
        cin>>comission;
    }

    void displaySalesman()
    {
         cout<<"Commision : "<<comission<<endl;
    }


    public :

    Salesman()
    {
        cout<<"Inside Salesman Constructor"<<endl;
        this->comission=000;
    }

    Salesman(int comssion)
    {
        this->comission=comission;
    }

    void accept()
    {
        Employee::accept();
        acceptSaleman();
    }

    void display()
    {
        Employee::display();
        displaySalesman();
    }

    ~Salesman()
    {
        cout<<"~Salesman Destructor"<<endl;
    }
};

class SalesManager : public  Manager, public Salesman
{
    public : 

    SalesManager()
    {
        cout<<"Inside SalesManager Constructor"<<endl;
    }

    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSaleman();
    }

    void display()
    {
        Employee::display();
        displyManager();
        displaySalesman();
    }

    ~SalesManager()
    {
        cout<<"~Sales Manager Destructor"<<endl;
    }
};

int main()
{   

    Employee *eptr = new SalesManager; 
    eptr->accept();
    eptr->display();

    delete eptr;
    eptr=NULL;
    
//------------------------------------------------------------------
    // Employee *eptr = new Salesman; 
    // eptr->accept();
    // eptr->display();

    // delete eptr;
    // eptr=NULL;


//----------------------------------------------------------------

    // Employee *eptr = new Manager;
    // eptr->accept();
    // eptr->display();

    // delete eptr;
    // eptr=NULL;

//-----------------------------------------------------------
    // Employee *eptr = new Employee;
    // eptr->accept();
    // eptr->display();

    // delete eptr;
    // eptr=NULL;

//------------------------------------------------------------
    // Employee e;
    // e.accept();
    // e.display();
    // Manager m;
    // m.accept();
    // m.display();

    // Salesman s;
    // s.accept();
    // s.display();

    // SalesManager sm;
    // sm.accept();
    // sm.display();

    return 0;
}