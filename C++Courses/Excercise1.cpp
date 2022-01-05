#include <iostream>
#include <math.h>

using namespace std;

class simple
{
private:
    int a, b;

public:
    int add, sub, multi, div;

    simple() {}

    int calculation_simple(int v, int n);
};

int simple ::calculation_simple(int v, int n)
{
    a = v;
    b = n;

    add = a + b;
    sub = a - b;
    multi = a * b;
    div = a / b;
}




class scientific
{
private:
    float c;

public:
    float log_calc, cos_calc, sin_calc, tan_calc;

    float calculation_science(float x);
};

float scientific ::calculation_science(float x)
{
    c = x;

    log_calc = log(c);
    cos_calc = cos(c);
    sin_calc = sin(c);
    tan_calc = tan(c);
}



class Hybrid : public simple, public scientific
{
public:
    Hybrid(){};

    Hybrid(float variable)
    {
        calculation_science(variable);
    };

    Hybrid(int g, int h)
    {
        calculation_simple(g, h);
    };

    void display();
};

void Hybrid ::display()
{
    cout << "The Addition of Numbers is  :  " << add << endl
         << "The Subtraction of Numbers is  :  " << sub << endl;
    cout << "The Multiple of Numbers is  :  " << multi << endl
         << "The Division of Numbers is  :  " << div << endl;
    cout << "The Logarithm of given value is  :  " << log_calc << endl
         << "The Cos value of Number is  :  " << cos_calc << endl;
    cout << "The Sine value of Number is  :  " << sin_calc << endl
         << "The Tan value of Number is  :  " << tan_calc << endl;
}

int main()
{
    Hybrid a(20,4);

    a.display();



    return 0;
}