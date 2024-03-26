#include<iostream>
using namespace std;

class Product 
{
    private :

    int id;
    string title;
    double price;

    public :

    Product()
    {
        this->id=0000;
        this->title=" ";
        this->price=0000000;
    }

    virtual void accept()
    {
        cout<<"Enter Product ID : ";
        cin>>id;
        cout<<"Enter Product Tilte : ";
        cin>>title;
        cout<<"Enter Product Price : ";
        cin>>price;
        
    } 

    virtual void display()
    {   
        cout<<"*** Product Details ***"<<endl;
        cout<<"Product ID - "<<id<<endl;
        cout<<"Enter Product Title - "<<title<<endl;
        cout<<"Enter Product Price - "<<price<<endl;
    }

    void setPrice(double price)
    {
        this->price=price;
    }

    double getPrice()
    {
        return price;
    }

    
};

class Book : public Product
{   
    private : 

    int id;
    string author;
    double price;

    public :

    // Book()
    // {
    //     this->id=0000;
    //     this->author="Author";
    //     this->price=10000;
    // }

    // Book(int id,int author, int price)
    // {
    //     this->id=id;
    //     this->author=author;
    //     this->price=price;
    // }

    void accept()
    {
        
        cout<<"!!! Book Details !!!"<<endl;
        Product::accept();
        cout<<"Enter author : ";
        cin>>author;
        setPrice(getPrice()-getPrice()*0.10);
         
    }

    void display()
    {
        
        cout<<"!!! Book Details !!!"<<endl;
        Product::display();
        cout<<"Enter Book Title - "<<author<<endl;
    
    }

    
};

class Tapes : public Product
{
    private :

    string artist;

    public :

    // Tapes()
    // {
    //     this->artist=" ";
    // }

    void accept()
    {
        cout<<"*** Tapes Details ***"<<endl;
        Product::accept();
        cout<<"Enter Artist : ";
        cin>>artist;
        setPrice(getPrice()-getPrice()*0.05);

    }

    void display()
    {
        cout<<"!!! Tapes Details !!!"<<endl;
        Product::display();
        cout<<" Artist : "<<artist;
    }

   
};



int main()
{
    // Book b;
    // b.accept();
    // b.display();

    // Tapes t;
    // t.accept();
    // t.display();

    Product *arr[3];
    int index = 0;
    
    int choice;

    do
    {
        cout<<"0. Exit"<<endl;
        cout<<"1. To Accept Book Details"<<endl;
        cout<<"2. To Accept Tapes Details"<<endl;
        cout<<"3. Final Bill after Discout"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 0 : 
            {
                cout<<"Exit Successfully"<<endl;
                
                break;
            }

            case 1 :
            {
                if(index < 3)
                {
                arr[index] = new Book[3];
                arr[index]->accept();  //base class late binding
                index++;
                }
                break;
            }

            case 3 :
            {

            int total=0;
                for (int i = 0; i < index; i++)
                {

                total+=arr[i]->getPrice();
                }
                cout<<"Total = "<<total<<endl;
                break;

            }
            case 2 :
            {

                if(index < 3)
                {
                arr[index] = new Tapes[3];
                arr[index]->accept();  //base class late binding
                index++;
                }
                break;
            }
                
        }
    }while(choice!=0);
    return 0;
}