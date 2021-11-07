#include<iostream>

using namespace std ;

// Nesting Member Function :


class calculate 
{
    private :

    int a , b ;

    public :    

    int takevalue();
    int add();
    void display(int q);

}  ;



int  calculate :: takevalue()
{
    cout<<"Enter the First  Number :    ";
    cin>>a;

    cout<<"Enter the Second  Number :    ";
    cin>>b;

    display(add());

}


int calculate :: add()
{
    int x;
    x = a+b;
    return x ;
}

void calculate :: display(int q)
{
    cout<<"The Sum is :  "<<q<<endl;
}


int main()
{
    class calculate str ;

    str.takevalue() ;

    // str.add();

    // str.display(str.add());

    
    return 0 ;
}