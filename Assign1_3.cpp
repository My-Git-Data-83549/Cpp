#include<iostream>
using namespace std;

class Student 
{   
    private :

    int Roll_NO;
    string Name;
    float Marks;

    public :


    void initStudent()
    {
        Roll_NO = 02;
        Name = "Vedant";
        Marks = 90;
    }

    void acceptStudentFromConsole()
    {
        cout<<"Enter Your Roll No : "<<endl;
        cin>>Roll_NO;
        cout<<"Enter Your Name : "<<endl;
        cin>>Name;
        cout<<"Enter Your Marks : "<<endl;
        cin>>Marks;
    }

    void printStudentFromConsole()
    {
        cout<<"Roll No. = "<<Roll_NO<<endl<<"Name = "<<Name<<endl<<"Marks = "<<Marks<<endl;
    }
};

int main()
{
    Student S1;
    int choice;

    do
    {
        cout<<"0. Exit"<<endl;
        cout<<"1. initStudent"<<endl;
        cout<<"2. Accept Student Details"<<endl;
        cout<<"3. Print Student Details"<<endl;
        cout<<"Enter Your Choice : "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0 : 
                cout<<"Exit : Thank You !!"<<endl;
                break;
            case 1 : 
                S1.initStudent();
                break;
            case 2 :
                S1.acceptStudentFromConsole();
                break;
            case 3 : 
                S1.printStudentFromConsole();
        }

    }while(choice!=0);

    return 0;
}