#include<bits/stdc++.h>
using namespace std;

int main()
{
    int stoppage;
    int enters,exits;
    int arr[1000];
    int grt=0,cap=0;
    
    cin>>stoppage;
    
    for(int i=0; i<stoppage; i++)
    {
        cin>>exits>>enters;
        cap=cap+(enters-exits);
        arr[i]=cap;
    }
    for(int i=0; i<stoppage; i++)
    {
        if(arr[i]>grt)
            grt=arr[i];
    }
    
    cout<<grt;
	return 0;
}
