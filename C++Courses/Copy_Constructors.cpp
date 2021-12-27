#include<iostream>

using namespace std ;


class Number
{
    int a ;

    public :

    Number()
    {
        a = 100;
    }

    Number(int var)
    {
        a = var;
    }

    Number(Number &obj)
    {
        cout<<"Copy Constructor is runnig......."<<endl;
        a = obj.a;
    }

    void display()
    {
        cout<<"The Value is  "<<a<<endl;
    } 
};



int main()
{
    Number a(34) , b(45);

    a.display();
    b.display();

    Number c(b);
    c.display();
    return 0 ;
}
