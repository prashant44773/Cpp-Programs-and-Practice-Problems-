#include<iostream>
#include<list>

using namespace std;


void display(list<int> &h)
{
    cout<<"Displaying The Linklists......"<<endl;

    list<int> :: iterator iter;

    for(iter = h.begin() ; iter != h.end() ; iter++)
    {
        cout<<*iter<<" ";
    }
    cout<<endl<<endl;
}


int main()
{
    list<int> link;

    link.push_front(60);
    link.push_back(80);
    link.push_back(50);
    link.push_back(90);
    link.push_back(30);
    link.push_back(100);
    link.push_back(20);
    link.push_back(70);
    link.push_back(40);
    link.push_back(10);

    // link.pop_back();
    // link.pop_back();
    // link.pop_back();
    // link.pop_back();

    // link.pop_front();
    // link.pop_front();
    // link.pop_front();
    // link.pop_front();
    // link.pop_front();
    // link.pop_front();

    // display(link);

    // link.remove(10);
    // link.remove(20);

    display(link);

    link.sort();

    display(link);


    list<int> list2(4);

    list<int> :: iterator iter;

    iter = list2.begin();

    *iter = 56;
     iter++;

     *iter = 70;
     iter++;

     *iter = 98;
     iter++;
     
     *iter = 58;
     iter++; 

    display(list2);

    list2.sort();
    
    display(list2);


    link.merge(list2);

    display(link);

    link.reverse();

    display(link);


    return 0;
}