#include<iostream>

using namespace std ;

int main()
{
    int a, b, c, second_largest = 0;
    
    cin>>a;

    cin>>b;

    cin>>c;
   

    if (a > b && a > c)
    {
        if (b > c)
        {
            second_largest = b;
        }
        else
        {
            second_largest = c;
        }
    }

    else if (b > c && b > a)
    {
        if (c > a)
        {
            second_largest = c;
        }
        else
        {
            second_largest = a;
        }
    }

    else if (c > a && c > b)
    {
        if (a > b)
        {
            second_largest = a;
        }
        else
        {
            second_largest = b;
        }
    }

    cout<<second_largest<<endl;

    return 0 ;
}




//.........................>>>>>>>>>>>>>>>>.............The code that i submited at Codechef...........>>>>>>>>>>>>>>,,,,..............///




//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>//


// #include<iostream>

// using namespace std ;

// int main()
// {
//     int a, b, c, second_largest = 0;
    
//     cin>>a;

//     cin>>b;

//     cin>>c;
   

//     if (a > b && a > c)
//     {
//         if (b > c)
//         {
//             second_largest = b;
//         }
//         else
//         {
//             second_largest = c;
//         }
//     }

//     else if (b > c && b > a)
//     {
//         if (c > a)
//         {
//             second_largest = c;
//         }
//         else
//         {
//             second_largest = a;
//         }
//     }

//     else if (c > a && c > b)
//     {
//         if (a > b)
//         {
//             second_largest = a;
//         }
//         else
//         {
//             second_largest = b;
//         }
//     }

//     cout<<second_largest<<endl;

//     return 0 ;
// }