#include<bits/stdc++.h>
using namespace std;

int main()
{
    int li,bob;
    
    cin>>li>>bob;
    
    if(li==bob)
        cout<<"1";
        
    else if(li<bob)
    {
        for(int i=1; li<=bob; i++)
        {
            li=li*3;
            bob=bob*2;
        
            if(li>bob)
            {
                cout<<i;
                break;
            }
        }
    }
	return 0;
}
