#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout <<"Enter two numbers ";
	cin >> a >> b;
	if (a > b) {
		cout<<"Greater number ="<<a;
	}
	else if (b > a) {
		cout<<"Greater number ="<<b;
	}
	else {
		cout<<"Both are equal.";
	}
	return 0;
}
