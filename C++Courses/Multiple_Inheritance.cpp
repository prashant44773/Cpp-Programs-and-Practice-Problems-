#include <iostream>

using namespace std;

class Base1
{
protected:
    int var1;

public:
    int set_value1(int a);
};

int Base1 ::set_value1(int a)
{
    var1 = a;
}

class Base2
{
protected:
    int var2;

public:
    int set_value2(int b);
};

int Base2 :: set_value2(int b)
{
    var2 = b;
}

class Derived : public Base1, public Base2
{
public:
    void show(){
        cout<<"The Value of Var1 is "<<var1<<endl;
        cout<<"The Value of Var2 is "<<var2<<endl;
        cout<<"The Sum is "<<var1+var2<<endl;
    }
};


int main()
{

    Derived a;

    a.set_value1(34);
    a.set_value2(55);
    a.show();

    return 0;
}
