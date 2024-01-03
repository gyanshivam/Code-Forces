#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, val_burl, ans1, ans2;
    
    cin>>t;
    
    while(t--)
    {
        cin>>val_burl;
        
        ans1 = val_burl / 3;
        ans2 = ans1 + 1;
        
        if(val_burl % 3 == 0)
            cout<<ans1<<" "<<ans1;
        else if(val_burl==1)
            cout<<ans2<<" "<<ans1;
        else
        {
            if((ans1*1 + ans1*2) + 1 == val_burl)
                cout<<ans2<<" "<<ans1;
            else
                cout<<ans1<<" "<<ans2;
        }
            
        cout<<endl;
    }
}
