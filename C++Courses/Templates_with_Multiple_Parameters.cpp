#include<iostream>

using namespace std;

template <class T1 = char, class T2 = char, class T3 = char>

class arguments
{
    private :
    T1 a;
    T2 b;
    T3 c;

    public :

    arguments(T1 x,T2 y,T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout<<"The value of Template T1 is  :  "<<a<<endl;
        cout<<"The value of Template T2 is  :  "<<b<<endl;
        cout<<"The value of Template T3 is  :  "<<c<<endl;
    }
};

int main()
{
    // arguments<int,int,char> obj(10,20,'z');
    // obj.display();

    // arguments<> object('a','b','c');
    arguments<int,int,int> object(30,20,10);
    object.display();
    return 0;
}
