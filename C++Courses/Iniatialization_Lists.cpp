#include<iostream>

using namespace std;


class Test
{
    private :

    int b;
    int a ;

    public :

    // Test(int i,int j) : a(i) , b(j) {cout<<"The Value of a is  :  "<<a<<endl<<"The Value of b is  :  "<<b<<endl;}
    // Test(int i,int j) : a(i) , b(a + j) {cout<<"The Value of a is  :  "<<a<<endl<<"The Value of b is  :  "<<b<<endl;}
    // Test(int i,int j) : a(i) , b(a * j) {cout<<"The Value of a is  :  "<<a<<endl<<"The Value of b is  :  "<<b<<endl;}
    // Test(int i,int j) : b(i) , a(b * j) {cout<<"The Value of a is  :  "<<a<<endl<<"The Value of b is  :  "<<b<<endl;}
    Test(int i,int j) : b(i) , a(b / j) {cout<<"The Value of a is  :  "<<a<<endl<<"The Value of b is  :  "<<b<<endl;}
};

int main()
{
    Test v(20,4);

    return 0;
}