#include<bits/stdc++.h>
#include<string>
using namespace std;
string rev(string ,int);
int funny(string,string,int);
int main()
{
	string s;
	cout<<"enter your string : ";
	cin>>s;
	int len=s.size();
	string store=rev(s,len);
	cout<<"reversed string : "<<store<<endl;
	if(funny(s,store,len))
	{
		cout<<"its funny string";
	}
	else
	{
		cout<<"its not a funny string";
	}
}

string rev(string s,int len)
{
	string s1;
	for(int i=len-1;i>=0;i--)
	{
		s1=s1+s[i];
	}
	return s1;
}

int funny(string s,string store,int len)
{
	int temp1=0,temp2=0;
	for(int i=0;i<len;i++)
	{
		
			 temp1=temp1+abs((int) s[i]-(int) s[i+1]);
			 temp2=temp2+abs((int) store[i] - (int) store[i+1]);
		
	}
	if(temp1=temp2)
	{
		return 1 ;
	}
	else{
		return 0;
	}
}

