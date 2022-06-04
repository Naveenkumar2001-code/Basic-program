#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	

	printf("enter a number :\n");
	scanf("%d" ,&a);
	printf("enter b number:\n");
	scanf("%d" ,&b);
	printf("enter c number:\n");
	scanf("%d" ,&c);

	if(a>b && a>c)
	{
		printf("a is bigger: %d",a);
	}
	else if(b>a && b>c)
	{
		printf("b is bigger : %d",b);
	}
	else{
		printf("c is bigger : %d",c);
	}
	
	return 0;
}
