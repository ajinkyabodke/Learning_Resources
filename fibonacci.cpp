#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,prev=1,next=1,fibonacci;
    cout << "Enter the terms upto which you want fibonacci series";
    cin >> n;
    cout << prev;
    cout << next;
    for(i=2;i<n;i++)
    {
      fibonacci = prev + next;
      prev = next;
      next = fibonacci;
       cout<<endl<<fibonacci;
    } 
}
