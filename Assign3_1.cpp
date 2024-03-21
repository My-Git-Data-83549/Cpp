#include<iostream>
using namespace std;

class Cylinder
{
    private : 
    
    double radius;
    double height;
    const static double PI;

    public :

    Cylinder() : Cylinder(10,10){}
    // {
    //     this->height=10;
    //     this->radius=10;
    // }

    Cylinder(double radius,double height)
    {
        this->radius=radius;
        this->height=height;
    }

    void setRadius(double radius)
    {
        this->radius=radius;
    }

    double getRadius()
    {
        return radius;
    }

    void setHeight(double height)
    {
        this->height=height;
    }

    double getHeight()
    {
        return height;
    }

    double getVolume()
    {
        return PI*this->radius*this->radius*this->height;
    }

    void printVolume()
        {
            double volume; 
            volume=getVolume();
            cout<<"Volume of Cylinder = "<<volume<<endl;
        }
};

const double Cylinder::PI = 3.14;

int main()
{
    Cylinder c1;
    Cylinder c2(5.0,10.0);
    c2.setRadius(6.0);
    c2.getRadius();
    c2.setHeight(7.0);
    //c2.getHeight();
    c2.printVolume();

    return 0;
}