#include<bits/stdc++.h>
using namespace std;

int main()
{
	int length,minm_movs=0;

    cin>>length;
    
    char ch[50];
    
    for(int x=0; x<length; x++)
        cin>>ch[x];
        
    for(int i=0; i<length; i++)
    {
        if(i!=length-2)
        {
            if(ch[i]==ch[i+1])
                minm_movs++;
        }
        else if(ch[i]==ch[i+1] && i+1==length-1)
            minm_movs++;
    }
    
    cout<<minm_movs;
    
	return 0;
}
