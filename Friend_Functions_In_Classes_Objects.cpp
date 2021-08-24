#include <iostream>

using namespace std;

int add(int i, int j);





class variable
{
private:
    int a, b;

public:
    int num1, num2;

    int takenumber()
    {
        cout << "Enter First Number :     ";
        cin >> num1;

        cout << "Enter Second Number :    ";
        cin >> num2;

        a = num1;
        b = num2;

        display(add(a,b));
    }

    void display(int v)
    {
        cout << "The Sum is :" << v << endl;
    }
};

int add(int i, int j)
{
    return i + j;
}

int main()
{
    int sum;

    class variable z;

    z.takenumber();

    
    return 0;
}