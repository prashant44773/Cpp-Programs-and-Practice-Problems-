#include<iostream>
using namespace std;

int global = 45 ;

int sum( int a , int b)
{
    return a+b ;
}

int main()
{
    int x = 34  , y = 46 ;
    char c = 'r';
    float T = 3.14;
    int global = 0 ; // Local variables AlWAYS Have precendenace over GLobAL Variables................................//
    

    cout<<"The value of Integer is "<<x<<endl<<"The value of charater is "<<c<<endl<<"The value of float is "<<T<<endl<<"The value of Sum is "<<sum(x,y)<<endl<<"The value of global Variable is "<<global;

    return 0;
}