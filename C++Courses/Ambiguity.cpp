#include<iostream>

using namespace std;



class a
{
    public :

    void greet()
    {
        cout<<"How are You...?"<<endl;
    }
};
class b
{
    public :

    void greet()
    {
        cout<<"Kaise ho app...?"<<endl;
    }
};

class Derived : public a , public b
{
    private :
    int a;

    public : 

    void greet()
    {
        b :: greet();
    }

};


class c
{
    public :

    void greet()
    {
        cout<<"Hello World"<<endl;
    }
};


class d : public c
{
    public :

    void greet()
    {
        cout<<"Hello Legendary People"<<endl;
    }
};

int main()
{
    // Derived a;
    // a.greet();

    d e;
    e.greet();

    return 0;
}