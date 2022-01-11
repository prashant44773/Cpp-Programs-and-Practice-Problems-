#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    int set(int, int);
    void display();
};

int complex ::set(int x, int y)
{
    a = x;
    b = y;
}

void complex ::display(void)
{
    cout << "The value of a is  :  " << a << endl;
    cout << "The value of a is  :  " << b << endl;
}

int main()
{

    // complex a;
    // a.set(3,5);
    // a.display();

    //.....calling the functions through Normal Pointer [Expressions = {(*pointer name)}]  Operator......//

    // complex *ptr = new complex;

    // (*ptr).set(10, 18);
    // (*ptr).display();

    //.....calling the functions through Arrow(->) Operator......//

    complex *ptr1 = new complex;

    ptr1->set(2,2);
    ptr1->display();

    return 0;
}