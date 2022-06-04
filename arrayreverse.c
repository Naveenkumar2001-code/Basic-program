#include<stdio.h>
#define size 10
int main()
{
	int arr[size]={1,2,3,4,5,6,7,8,9,10};
	int i,j,temp;
	for(i=0,j=size-1;i<j;i++,j--)
	{
		
		
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		
	}
	printf("\n after revesing the array is: ");
	for(i=0;i<size;i++)
	{
		printf("%d  ",arr[i]);
		printf("  ");
	}
	return 0;
}
