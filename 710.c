#include<stdio.h>
int main()
{
	int n=5;
	{
		int n=10;
		printf("Value of n (inner) :%d\n",n);
	}
	printf("Value of n (outer) :%d\n",n);
	return 0;
}