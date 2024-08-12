#include<stdio.h>
int CalculateSum(int n1,int n2);
int main()
{
	int num1,num2;
	printf("Enter two numbers :\n");
	scanf("%d %d",&num1,&num2);
	CalculateSum(num1,num2);
	return 0;
}
int CalculateSum(int n1,int n2)
{
	int sum;
	sum=n1+n2;
	printf("Sum=%d\n",sum);
}