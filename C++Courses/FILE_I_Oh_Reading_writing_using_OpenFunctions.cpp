#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    ofstream out;
    out.open("sample20.txt");
    out<<"The best";
    out<<" is";
    out<<" Yet To";
    out<<" Come";
    out.close();

    ifstream in;
    string st,st1,st2,st3;
    in.open("sample20.txt");
    // in>>st;
    // in>>st1;
    // in>>st2;
    // in>>st3;
    // cout<<st;
    // cout<<st1;
    // cout<<st2;
    // cout<<st3;

    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st;
    }
    in.close();
    return 0;
}