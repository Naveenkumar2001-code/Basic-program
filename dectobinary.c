#include<stdio.h>
int main()
{
	int arr[10],i,j,num;
	printf("\n enter the decimal number: ");
	scanf("%d",&num);
	i=0;
	while(num>0)
	{
		arr[i]=num%2;
		num=num/2;
		i++;
	}
	printf("\n binary number : ");
	for(j=i-1;j>=0;j--)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
