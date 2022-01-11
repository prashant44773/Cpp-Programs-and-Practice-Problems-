#include<iostream>

using namespace std;


class student
{
    protected : 
    int roll_number;

    public :
  
    void set_rollnumber(int a)
    {
        roll_number = a;
    }

    void get_rollnumber()
    {
        cout<<"The Roll Number is  :  "<<roll_number<<endl;
    }
};


class test : virtual public student
{
    protected :
    int maths , physics;

    public :

    void set_marks(int x,int y)
    {
        maths = x;
        physics = y;
    }

    void get_marks()
    {
        cout<<"The marks of Maths is  :  "<<maths<<endl;
        cout<<"The marks of Physics is  :  "<<physics<<endl;
    }
};


class sports : virtual public student
{
    protected :
    int score;

    public :

    void set_score(int a)
    {
        score = a;
    }

    void get_score()
    {
        cout<<"The Score in Sports is  :  "<<score<<endl;
    }
};


class results : public test , public sports
{
    private :
    int total;

    public :

    void display()
    {
        total = maths + physics + score; 
        get_rollnumber();
        get_marks();
        get_score();

        cout<<"The Results of Total Performance is  :  "<<total<<endl;
    }
};

int main()
{
    results a;

    a.set_rollnumber(28);
    a.set_marks(82,89);
    a.set_score(7);

    a.display();

    return 0;
}