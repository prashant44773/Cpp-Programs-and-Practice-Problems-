#include<iostream>
using namespace std;

class base
{
    public :
    int var_base ;

    void show_base()
    {
        cout<<"The value of var_base is : "<<var_base<<endl;
    }
};


class derived : public base
{
    public :
    int var_derived ;

    void show_derived()
    {
        cout<<"The value of var_base is : "<<var_base<<endl;
        cout<<"The value of var_base is : "<<var_derived<<endl; 
    }
};

int main()
{
    base *base_class_pointer;
    base base_object;
    derived derived_object;

    base_class_pointer = &derived_object;// Pointer of base class pointing to derived class

    base_class_pointer->var_base = 23;
    base_class_pointer->show_base();

    // base_class_pointer->var_derived = 244;  // Show AN error because we can only access the metods , variables and functions ot the class which is made the pointer




    return 0;
}