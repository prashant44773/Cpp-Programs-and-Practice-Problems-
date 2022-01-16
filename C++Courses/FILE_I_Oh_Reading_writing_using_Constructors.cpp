#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    // string st = "Lonewolf is Dead";
    // ofstream out("sample10.txt");
    // out<<st;

    string str;
    ifstream content("sample10.txt");
    // content>>str;
    getline(content,str);

    cout<<"The content of the String is ::  "<<str<<endl;
    return 0;
}