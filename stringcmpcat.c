#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]={"1234"};
	char str2[]={"naveen kumar"};
/*	if((strcmp(str1,str2))==0)
	{
		printf("sucess");
	}
	else
	{
		printf("failed");
	}

strcat(str1,"_thisisthenumber");
printf("%s ",str1);	

strcpy(str1,"hiii");
printf("\n %s",str1);
*/
int len=strlen(str1);
int len2=strlen(str2);
printf("\n %d\n%d",len,len2);
}
