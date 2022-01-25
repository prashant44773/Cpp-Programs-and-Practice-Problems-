#include<iostream>
#include<string>
#include<map> 

using namespace std;

int main()
{
    map<string , int> marks;

    marks["Goku"] = 100;
    marks["Gohan"] = 30;
    marks["Piccolo"] = 70;
    marks["Trunks"] = 60;
    marks["Vegeta"] = 99;
    marks["Frieza"] = 80;
    marks["Krillin"] = 5;

    marks.insert({{"Beerus",1000} , {"Whis",10000}});
    
    map<string,int> :: iterator iter;

    for(iter = marks.begin() ; iter != marks.end() ; iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    return 0;
}