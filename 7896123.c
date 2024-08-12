#include<stdio.h>
int main(void)
{
	int a,i;
	printf("Input number of lines:");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		printf("%d %d %d\n",i,i*i,i*i*i);
	}
	printf("\n");
	return 0;
}