#include<stdio.h>
int main()
{
	int arr[]={2,4,22,6,1,3,-44,11,7};
	int i,max,min;
	min=max=arr[0];
	for(i=0;i<9;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("minimum=%d \n maximun=%d",min,max);
}
