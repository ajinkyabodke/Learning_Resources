#include<iostream>
using namespace std;
int main()
{
    int i, j, a, b;

    cout<<"Enter the number to check for prime";
    cin>>a;

    for( i = 2; i <= a/2; i++ )
    {
        if( a % i == 0 )
        {
            b = 1;
            break;
        }
    }

    if( b == 1 )
        cout<<"It is not prime";
    else
        cout<<"It is prime";
}
