#include <iostream>

using namespace std;

class BankDeposite
{
    int PrincipeAmount;
    int years;
    float InterestaRate;
    float returnvalue;

public:
    BankDeposite() {}

    BankDeposite(int p, int y, int r);

    BankDeposite(int p, int y, float r);

    void Display();

};



BankDeposite ::BankDeposite(int p, int y, float r)
{
    PrincipeAmount = p;
    years = y;
    InterestaRate = r;

    returnvalue = PrincipeAmount;


    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + InterestaRate);
    }
};



BankDeposite ::BankDeposite(int p, int y, int r)
{
    PrincipeAmount = p;
    years = y;
    InterestaRate = float(r)/100;

    returnvalue = PrincipeAmount;


    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + InterestaRate);
    }
};


void BankDeposite :: Display()
{
    cout<<endl<<"Principle Ampount was  "<<PrincipeAmount<<endl
    <<"Return Value After "<<years<<" is "
    <<returnvalue<<endl;
};



int main()
{
    int p , y , r;
    float R;

    BankDeposite b1 , b2;

    // cout<<"Enter the values of p , y and r   "<<endl;
    // cin>>p>>y>>r;

    // b1 = BankDeposite(p,y,r);
    // b1.Display();
    
    cout<<"Enter the values of p , y and r   "<<endl;
    cin>>p>>y>>R;

    b2 = BankDeposite(p,y,r);
    b2.Display();
    
    return 0;
}