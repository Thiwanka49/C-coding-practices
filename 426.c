#include<stdio.h>
int CalculateSum ();
int main()
{
	int tot;
	tot =CalculateSum ();
	printf("Sum= %d\n",tot);
	return 0;
}
int CalculateSum ()
{
	int sum, n1, n2;
	printf("Enter two numbers :\n");
	scanf("%d %d", &n1, &n2);
	sum=n1+n2;
	return sum;
	
}