#include<stdio.h>
int main()
{
	int marks;
	printf("Enter your mark :");
	scanf("%d",&marks);
	if(marks>=35&&marks<=100)
	{
		printf("pass\n");
	}
	else if(marks<35&&marks>=0)
	{
		printf("fail\n");
	}
	else
	{
		printf("Invalid\n");
	}
	printf("Keep it up\n");
	return 0;
}