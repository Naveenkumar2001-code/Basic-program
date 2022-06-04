#include<stdio.h>
int main()
{
	int i,j,n=3;
	printf("\n prime numbers:  ");
	for(i=2;i<=n;i++)
	{ 
		int c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
	if(c==2)
	{
		printf("\n %d",i);
	}
}
	return 0;
}
