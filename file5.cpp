#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    
    cin>>k>>n>>w;
    
    int total_a=0;
    
    for(int i=1; i<=w; i++)
        total_a = total_a+(i*k);

    if(total_a>n)
        cout<<total_a-n;
    else 
        cout<<0;
}
