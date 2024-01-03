#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,str2,str_rev;
    
    cin>>str>>str2;
    
    for(int i=str.length()-1; i>=0; i--)
        str_rev.push_back(str[i]);
        
    if(str2==str_rev)
        cout<<"YES";
    else
        cout<<"NO";
        
	return 0;
}
