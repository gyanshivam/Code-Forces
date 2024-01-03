#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int x;
    int y;
    
    cin>>x>>y;
    
    for(int i=0; i<y; i++)
    {
        if(x%10==0)
            x=x/10;
        else
            x=x-1;
    }
    
    cout<<x;
	return 0;
}
