// Program to print maximum of two numbers using c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;                                         //Two variables to input two numbers by user
    cout << "Enter two numbers using space: ";
    cin >> n >> m;
    cout << max(n,m);                                // Using max inbuilt function to print maximum of two numbers
    return 0;
}
