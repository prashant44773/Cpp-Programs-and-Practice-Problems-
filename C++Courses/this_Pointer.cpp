#include<iostream>
using namespace std;


class A
{
    private :
    int a ;

    public :
    
    A& set_data(int a)
    {
        this->a = a;
        return *this;
        // this->a = a;
    } 
    void get_data()
    {
        cout<<"The value of a is  :  "<<a<<endl;
    } 
};

int main()
{
    A e;

    e.set_data(5).get_data();


    return 0;
}