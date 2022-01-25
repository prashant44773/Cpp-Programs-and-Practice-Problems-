#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
    int arr[] = {2,5,1,3,9,4,6,7,0,8};
    int size = sizeof(arr)/sizeof(int);
    // cout<<size;

    sort(arr,arr+10,greater<int>());

    for(int i=0 ; i < size ; i++){cout<<arr[i]<<" ";}
    cout<<endl;
    return 0;
}