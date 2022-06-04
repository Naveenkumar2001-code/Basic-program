#include<bits/stdc++.h>
using namespace std;
int main()
{
	string Name;
	//given a string 
	getline(cin,Name);
	for(int i=Name.size()-1;i>=0;i--)
	{
		cout<<Name[i];
	}
	return 0;
}
