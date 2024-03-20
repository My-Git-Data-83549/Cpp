#include<iostream>
using namespace std;

class Box
{
    private :
    
    float length;
    float width;
    float height;

    public :

    Box() : Box(10,12,14) {}

    Box(int value) : Box(value,value,value) {}

    Box(int lenght,int width, int height)
    {
        this->height=height;
        this->length=lenght;
        this->width=width;
    }

    int displayVolume()
    {
        int volume=length*width*height;
        return volume;
    }

};

int main()
{
    // Box b1;
    // b1.displayVolume();
    // Box b3(10);
    // Box b2(10,10,10);
    int choice,ans;

    do
    {
        cout<<"0. Exit"<<endl;
        cout<<"1. Default Value"<<endl;
        cout<<"2. Volume with same value"<<endl;
        cout<<"3. Volume with different values"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 0 : 
                cout<<"Exit"<<endl;
                break;
            case 1 : 
            {
                // cout<<"Enter values : "<<endl;
                // cin>>values;
                Box b1;
                ans=b1.displayVolume();
                cout<<"Voulme = "<<ans<<endl;
                break;
            }
            case 2 : 
            {

                float values;
                cout<<"Enter values : "<<endl;
                cin>>values;
                Box b2(values);
                ans=b2.displayVolume();
                cout<<"Voulme = "<<ans<<endl;
                break;
            }
            case 3 :
            { 
                float l,w,h;
                cout<<"Enter Length : "<<endl;
                cin>>l;
                cout<<"Enter Width : "<<endl;
                cin>>w;
                cout<<"Enter Height : "<<endl;
                cin>>h;
                Box b3(l,w,h);
                ans=b3.displayVolume();
                cout<<"Voulme = "<<ans<<endl;
                break;
            }               
                
        }   



    }while(choice!=0);
    

    return 0;
}