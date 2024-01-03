#include<bits/stdc++.h>
using namespace std;

int main()
{
	int count1=0, count2=0;
	long int res;
	
	cin>>res;
	
	string result;
	cin>>result;
	
	for(int i=0; i<result.length(); i++)
	{
	    if(result[i]=='A')
	        count1++;
	    else if(result[i]=='D')
	        count2++;
	}
	
	if(count1>count2)
	    cout<<"Anton";
    else if(count2>count1)
	    cout<<"Danik";
    else
	    cout<<"Friendship";
	   
	return 0;
}
