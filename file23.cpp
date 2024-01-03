#include<bits/stdc++.h>

using namespace std;

int main()
{
	long int n;
	cin>>n;
	
	int count=0;


	if(n%2==0)
	{
	    if(n%4==0)
	        cout<<((n/4)-1);
		else
		    cout<<n/4;
	}
	else
	    cout<<"0";
	return 0;
}
