#include<stdio.h>
#include<string.h>
int main()
{
	int n,r,s=0;
	printf("\n decimal number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%2;
		s=s*10+r;
		n=n/2;
	}
	printf("%d",s);
	}
