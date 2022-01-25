#include<iostream>

using namespace std;


template <class t>

class base
{
    public : 
    t data;

    base(t a)
    {
        data = a;
    }

    void display();
};

template<class t>
void base<t> :: display()
{
    // printf("The value stored in data is :   ");
    cout<<"The value stored in data is  :   "<<data<<endl;
}


void func(int a)
{
    cout<<"This is Normal Function"<<endl;
}

template <class a>
void func(a var)
{
    cout<<"This is Templatised Function"<<endl;
}


int main()
{
    // base<int> obj(45);
    // obj.display();

    func(4);
    // func<char>('r');
     
    return 0;
}