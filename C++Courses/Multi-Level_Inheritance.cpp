#include<iostream>

using namespace std;


class student
{
    protected :
    int rollnumber;

    public:
    int set_rollnumber(int a);
    void get_rollnumber();
};

int student :: set_rollnumber(int a)
{
    rollnumber = a;
}

void student :: get_rollnumber()
{
    cout<<"The Roll Number is  : "<<rollnumber<<endl;
};



class exam : public student
{
    protected :
    float maths , physics ;

    public :
    float set_marks(float , float );
    void get_marks();

};


float exam :: set_marks(float a , float b)
{
    maths = a ; 
    physics = b ; 
}

void exam :: get_marks()
{
    cout<<"The Marks in Maths is  : "<<maths<<endl;
    cout<<"The Marks in Physics is  : "<<physics<<endl;
};


class results : public exam 
{
    protected :
    int percentage;

    public :
    void get_percentage();
};


void results :: get_percentage()
{
    cout<<"The Percentage is  :  "<<(maths+physics)/2<<endl;
} 


int main()
{
    results lone;

    lone.set_rollnumber(34);
    lone.get_rollnumber();
    lone.set_marks(90,92);
    lone.get_marks();
    lone.get_percentage();

    
    return 0;
}


