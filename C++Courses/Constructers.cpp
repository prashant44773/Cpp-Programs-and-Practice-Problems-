#include <iostream>
#include<cmath>
using namespace std;


class Point
{
private:
    int a, b;

    friend void Distance(Point, Point);

public:
    // Complex(void); // Constructor

    Point(int x, int y)
    {
        a = x;
        b = y;
    };

    void Display()
    {
        cout << "The Point is (" << a << " , " << b << ")" << endl;
    };
};



void Distance(Point p1, Point p2){

    float val;

    val = sqrt((p2.a-p1.a)*(p2.a-p1.a) + (p2.b-p1.b)*(p2.b-p1.b));

    cout<<"The Distance Between Point ("<<p1.a<<" , "<<p1.b<<")"<<" and "<<"Point ("<<p2.a<<" , "<<p2.b<<")  is  :  "<<val<<endl;
};



int main()
{
    Point d(9,6);

    Point e(3,7);

    d.Display();
    e.Display();
    
    Distance(d,e);

    return 0;
}