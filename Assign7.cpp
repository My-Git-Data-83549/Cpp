#include <iostream>
using namespace std;

class Employee
{
private:
    int id;
    double salary;

public:
    Employee()
    {
        cout << "Inside Employee()" << endl;
    }
    Employee(int id, double salary)
    {
        cout << "Inside Employee(int,double)" << endl;
    }
    virtual void accept()
    {
        cout << "Enter the empid - ";
        cin >> id;
        cout << "Enter the salary - ";
        cin >> salary;
    }
    virtual void display()
    {
        cout << "Id - " << id << endl;
        cout << "Salary - " << salary << endl;
    }
    virtual ~Employee()
    {
        cout << "~Employee()" << endl;
    }
};

class Manager : virtual public Employee
{
private:
    double bonus;

protected:
    void acceptManager()
    {
        cout << "Enter the bonus - ";
        cin >> bonus;
    }
    void displayManager()
    {
        cout << "Bonus - " << bonus << endl;
    }

public:
    Manager()
    {
        cout << "Inside Manager()" << endl;
    }
    Manager(int id, double salary, double bonus)
    {
        cout << "Inside Manager(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
    }

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager()
    {
        cout << "~Manager()" << endl;
    }
};

class Salesman : virtual public Employee
{
private:
    double commission;

protected:
    void acceptSalesman()
    {
        cout << "Enter the Commission - ";
        cin >> commission;
    }
    void displaySalesman()
    {
        cout << "Commission - " << commission << endl;
    }

public:
    Salesman()
    {
        cout << "Inside Salesman()" << endl;
    }
    Salesman(int id, double salary, double commission)
    {
        cout << "Inside Salesman(int,double,double)" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout << "~Salesman()" << endl;
    }
};
class SalesManager : public Manager, public Salesman
{
public:
    SalesManager()
    {
        cout << "Inside Salesmanager()" << endl;
    }
    SalesManager(int id, double salary, double bonus, double commission)
    {
        cout << "Inside SalesManager(int,double,double,double)" << endl;
    }
    ~SalesManager()
    {
        cout << "~Salesmanager()" << endl;
    }
    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
};

int main()
{
    // SalesManager obj;
    int choice, index = 0; 
    int mcount=0,scount=0,smcount=0;
    // int count = 0;
    Employee *arr[10];
    

    do
    {
        cout << "0. Exit" << endl;
        cout << "1. To Accept Employees Details" << endl;
        cout << "2. Display All Managers" << endl;
        cout << "3. Display All Salesman" << endl;
        cout << "4. Display All SalesManagers" << endl;
        cout << "5. Display Counts" << endl;
        cin >> choice;
        switch (choice)
        {
        case 0:
        {
            cout << "Exit Successfully" << endl;

            break;
        }

        case 1:
        {

            int choice;
            cout << "*** Enter Employee Details ***" << endl;
            cout << "1. Manager Details" << endl;
            cout << "2. Salesman Details" << endl;
            cout << "3. SalesManager Details" << endl;
            cout << "Enter Your Choice" << endl;
            cin>>choice;

            switch ((choice))
            {
            case 1:
            {
                if (index < 10)
                {
                    arr[index] = new Manager();
                    arr[index]->accept();
                    ++index;
                    ++mcount;
                }
                else
                    cout << "Array is Full..." << endl;
                break;
            }
            case 2:
            {
                if (index < 10)
                {
                    arr[index] = new Salesman();
                    arr[index]->accept();
                    ++index;
                    ++scount;
                }
                else
                    cout << "Array is Full..." << endl;
                break;
            }

            case 3:
            {
                if (index < 10)
                {
                    arr[index] = new SalesManager();
                    arr[index]->accept();
                    ++index;
                    ++smcount;
                }
                else
                    cout << "Array is Full..." << endl;
                break;
            }

                default :
                {
                    cout << "Enter Wrong Entery" << endl;
                    break;
                }
            }
                    break;
        }

        case 2:
        {
            for (int i = 0; i < index; i++)
            {
                if (typeid(*arr[i]) == typeid(Manager))
                    arr[i]->display();
            cout << "--------------------------------------------" << endl;
            }
            break;
        }

        case 3:
        {
            for (int i = 0; i < index; i++)
            {
                if (typeid(*arr[i]) == typeid(Salesman))
                    arr[i]->display();
            cout << "--------------------------------------------" << endl;
            }
            break;
        }

        case 4:
        {
            for (int i = 0; i < index; i++)
            {
                if (typeid(*arr[i]) == typeid(SalesManager))
                    arr[i]->display();
            cout << "--------------------------------------------" << endl;
            }
            break;
        }

        case 5 : 
        {
            cout<<"The Count of Total Empcountloyees - "<<index<<endl;
            cout<<"Count of Managers - "<<mcount<<endl;
            cout<<"Count of Salesman - "<<scount<<endl;
            cout<<"Count of SalesManager - "<<mcount<<endl;
        }    

        }
    } while (choice != 0);
    return 0;
}

