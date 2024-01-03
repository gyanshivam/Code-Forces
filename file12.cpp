#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    int count=0;
    
    cin>>x;
    
    for(int i=0; x>0; i++)
    {
        if(x%10==4 || x%10==7)
            count++;
        x=x/10;
    }
    
    if(count==7||count==4)
        cout<<"YES";
    else
        cout<<"NO";
        
	return 0;
}
