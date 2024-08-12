#include<stdio.h>
int calculateSum();
int main()
{
	calculateSum();
	return 0;
}
int calculateSum ()
{
	int sum,n1,n2;
	printf("Enter two numbers :\n");
	scanf("%d %d ",&n1,&n2);
	sum=n1+n2;
	printf("Sum=%d\n",sum);
}