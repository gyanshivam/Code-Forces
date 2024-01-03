#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x=0;
    
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        
        if((str=="X++") || (str=="++X"))
            x++;
        else if((str=="X--") || (str=="--X"))
            x--;
    }
    
    cout<<x;
    
	return 0;
}
