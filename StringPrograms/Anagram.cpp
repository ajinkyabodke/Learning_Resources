
#include <bits/stdc++.h>
using namespace std;

    bool areAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        if(n!=m)
            return false;
        
        int x[150]={0};
        for(int i=0;i<n;i++)
        x[s[i]]++;
        
        
         int y[150]={0};
        for(int i=0;i<m;i++)
        y[t[i]]++;
        
        for(int i=0;i<150;i++)
        {
            if(x[i]!=y[i])
                return false;
        }
        
        
        return true;
    }

int main()
{
	string str1,str2;
	
	cout<<"enter two strings:";
	cin>>str1>>str2;

	if (areAnagram(str1, str2))
		cout << "The two strings are anagram of each other";
	else
		cout << "The two strings are not anagram of each "
				"other";

	return 0;
}

