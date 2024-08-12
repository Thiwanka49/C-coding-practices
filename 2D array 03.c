#include<stdio.h>
int main(void)
{
	int a[50][50],i,j,n,m;
	printf("Enter the number of row and column\n");
	scanf("%d%d",&n,&m);
	printf("Enter the element of the array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Elements of the array :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
