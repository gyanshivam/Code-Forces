#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, sum=0;
    cin>>n;
    
    for(int i=1; i<=n; i++)
        sum=sum+i;
    if(sum%2==0)
        cout<<"0";
    else
        cout<<"1";
    
    return 0;
}
