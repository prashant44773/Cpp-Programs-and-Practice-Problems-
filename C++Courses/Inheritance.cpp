#include<iostream>

using namespace std ;


class Employee{

    public :
    int id;
    int salary = 100;

    Employee(){}

    Employee(int a)
    {
        id = a;
    }
};


class Programmer : public Employee
{
    public :
    
    Programmer(int v)
    {
        id = v ;
    }

    int code = 199;

    void getdata()
    {
        cout<<code<<endl;
    }

};

int main()
{
    Employee ajay(2) , nayan(4) , krish(3);

    cout<<ajay.id<<endl;
    cout<<nayan.id<<endl;
    cout<<krish.id<<endl;

    Programmer a(10);

    a.getdata();
    cout<<a.id<<endl;
    
    
    return 0 ;
}