#include <iostream>

using namespace std;

// string s;

class Data
{
private:
    char s[1000];

public:

    void getdata()
    {

        cout << "Enter Your Name :  " << endl;
        cin.getline(s,1000);
    }

    void display()
    {
        cout << "This is the content of the String :  " << s;
    }
};



int main()
{
    class Data d1 ;
    d1.getdata();
    d1.display();

    

    return 0;
}