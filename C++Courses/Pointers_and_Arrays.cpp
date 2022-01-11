#include<iostream>
using namespace std;

class shop
{
    private :
    int a , b;

    public :
    void  set_data()
    {
        int x , y;
        
        cin>>x;
        cin>>y;

        a = x;
        b = y;
    }

    void get_data()
    {
        cout<<"The Tag number is  "<<a<<endl;
        cout<<"The Price  is  "<<b<<" .Rs"<<endl;
    }
};

int main()
{
    int size = 3;
    shop *ptr = new shop[size];

    shop *ptrtemp = new shop;

    ptrtemp = ptr;
    
    int i;

    for(i=0 ; i < size ; i++)
    {
        cout<<"Enter the Item Number and Price of the product No. "<<i+1<<endl;
        ptr->set_data();
        ptr++;
    }

    ptr = ptrtemp;

    for(i=0 ; i < size ; i++)
    {
        ptr->get_data();
        ptr++;
    }

    return 0;
}