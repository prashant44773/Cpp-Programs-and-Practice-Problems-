#include <iostream>

using namespace std;


class var1; 
class var2;

void add(class var1 , class var2); 



class var1 
{
    private :
    int a;

    friend void add(var1 , var2);

    public :

     void setvalue(int b)
     {
        //  cout<<"Enter the Number :  "<<endl;
        //  cin>>b;

         b = a;
     }
};


class var2 
{
    private :
    int x;

    friend void add(var1 , var2);

    public :

    

     void setvalue(int y)
     {
        //  cout<<"Enter the Number :  "<<endl;
        //  cin>>y;

         x = y;
     }
};


void add(var1 z , var2 v)
{
    cout<<"The sum is :  "<<z.a+v.x<<endl;
}


int main()
{  
    class var1 z;

    z.setvalue(3);

    class var2 v;

    v.setvalue(5);

    add(z,v);





    return 0;
}