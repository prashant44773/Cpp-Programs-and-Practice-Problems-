#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying the Vector......"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}

int main()
{
    // vector<int> vec1;

    // vec1.push_back(230);
    // vec1.push_back(340);
    // vec1.push_back(460);
    // vec1.push_back(550);
    // vec1.push_back(690);

    // int element, size;
    // cout << "Enter the Size of Vector  :  ";
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter the value of Element  :  ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }

    // display(vec1);

    // vec1.pop_back();
    // vec1.pop_back();
    // vec1.pop_back();

    // vector<int> :: iterator iter;
    // iter = vec1.begin();


    // vec1.insert(iter,10,5);

    // vector<char> vec1(5);

    // vec1.push_back('a');
    // vec1.push_back('b');
    // vec1.push_back('c');

    // vector<char> vec2(vec1);

    vector<int> vec3(4,20);

    display(vec3);

    return 0;
}
