#include <iostream>

using namespace std;

class Employee
{
private:

    int id;

    static int count ; // if it is assigned as Static then this Variable wont remain an individual objects Property , but it will become class's Property
    
    // only static functions can access static Variables directly 
public :
    
    void setdata();
    void display();

    static void getcount();

};


void Employee :: setdata()
{
    cout<<"Enter the Id Number    :    ";
    cin>>id;

}

void Employee :: display()
{
    cout<<"The Employee  Number  "<<count + 1<<" have Id Number "<<id<<endl;
    cout<<endl;

    count++;
}


int Employee :: count ;


void Employee :: getcount()
{
    cout<<"The Value of Count is  :   "<<count<<endl<<endl;
}


int main()
{
    Employee wolf , lion , bear ;

    wolf.setdata();
    wolf.display();
    

    lion.setdata();
    lion.display();
    

    bear.setdata();
    bear.display();
    

    return 0;
}