#include<iostream>

using namespace std ;


class Base
{
    private : 
    int var1 ;

    public :
    int var2 ;

    void setdata();

    int getdata1();
    int getdata2();
};


void Base ::setdata(void)
{
    var1 = 10;
    var2 = 20;
}


int Base :: getdata1()
{
    return var1;
}


int Base :: getdata2()
{
    return var2;
}


class Derived : public Base
{
    int var3 ;

    public :

    void Process();
    void display();
}; 

void Derived ::Process()
{
    var3 = var2 * getdata1();
}

void Derived :: display()
{
    cout<<"The Value of var_1 is  "<<getdata1()<<endl;
    cout<<"The Value of var_2 is  "<<var2<<endl;
    cout<<"The Value of var_3 is  "<<var3<<endl;
} 



int main()
{

    Derived a ;

    a.setdata();
    a.Process();
    a.display();

    
    return 0 ;
}