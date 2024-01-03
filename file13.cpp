#include<bits/stdc++.h>
using namespace std;

int main()
{
    int count=0, count2=0;
    string s;
    
    cin>>s;
    
    for(int i=0; i<s.length(); i++)
    {
        if(isupper(s[i]))
            count++;
        else if(islower(s[i]))
            count2++;  
    }
    
    for(int i=0; i<s.length(); i++)
    {
        if(count>count2)
            s[i]=toupper(s[i]);
        else
            s[i]=tolower(s[i]);
    }
    
    cout<<s;
	return 0;
}
