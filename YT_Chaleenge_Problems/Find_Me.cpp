#include <iostream>

using namespace std;

int main()
{
    int n, k;
    //  scanf("%d", &n);
    cout << "Enter the First Integer : " << endl;
    cin >> n;

    // scanf("%d", &k);
    cout << "Enter the Second Integer : " << endl;
    cin >> k;

    int T = n * 2;

    int integer[T];

    for (int i = 0; i < T; i++)
    {
        //  scanf("%d", &integer[i]);
        cout<<"Enter the "<<i<<"th"<<"Integer"<<endl;
        cin >> integer[i];
    }

    int count = 0;

    for (int j = 0; j < T; j++)
    {
        if (integer[j] == k)
        {
            count++;
            break;
        }
    }

    if (count >= 1)
    {
        cout << "1";
    }
    else
    {
        cout << "-1";
    }

    return 0;
}