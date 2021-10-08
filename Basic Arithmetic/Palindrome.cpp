#include<iostream>
using namespace std;

int main(){

    int n,temp;
    cin>>n;
    int sum=0;
    temp=n;

    while(n>0){
        int lastDigit=n%10;
      
        sum=sum*10+lastDigit;
        n=n/10;
    }
    if(temp==sum)
    cout<<"Palindrome number";
    else
    cout<<"Not a Palindrome number";
    
    return 0;
}