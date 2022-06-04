#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	char c;
	cin>>c;
	int count=0;
	int len=s.size();
	for(int i=0;i<len;i++)
	{
		if(c==s[i])
		{
			count++;
		}
	}
	cout<<"times: "<<count;
}
