#include<stdio.h>
/*#define n 5 */
int main()
{
	printf("\t ************welcome to odd or even program*******************");
	int a,/*arr[n] */i,j;
/*	printf("\n enter ur number: ");
/*	for(i=0;i<n;i++)
	{
	scanf("\n %d",&arr[i]); 
}*/
	for(i=0;i<=a;i++)
	{
		int c=0;
		for(j=1;j<=i;j++)
		{
	/*if(arr[i]%2==0)*/
	if(i%j==0)
	{
		c++;
		/*printf("\n %d is even number",arr[i]);*/
	}
}	if(c==2)
	{
		printf("\n %d",i);
	}
	/*else
	{
		printf("\n %d is odd number",arr[i]);
	}*/
}
	return 0;
}
