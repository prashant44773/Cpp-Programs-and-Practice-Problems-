#include<iostream>

using namespace std ;


class Point
{
    private :
    int a , b;

    public :

    Point(int x , int y)
    {
        a = x;
        b = y;
    }

    Point(int x)
    {
        a = x;
        b = 99;
    }

    Point()
    {
        a = 34;
        b = 45;
    }


    void Printvalue()
    {
        cout<<"The Points are ("<<a<<" , "<<b<<")"<<endl;
    }

};



int main()
{

    Point d;
    d.Printvalue();

    Point f(4);
    f.Printvalue(); 
    
    Point r(5,6);
    r.Printvalue();

    return 0;
}



