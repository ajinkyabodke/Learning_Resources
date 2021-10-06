#include <iostream>
using namespace std;


int max_num(int a,int b)
{
    return (a>b)?a:b;
}


int main() {
	int T;
	cin>>T;
	//input the number of test cases
	
	for(int i=1;i<=T;i++)
	{
	    int A;
	    int B;
	    cin>>A>>B;
	    
	    //input the two numbers on which operations are to be perfomed.
	    cout<<max_num(A,B)<<endl;
	}
}