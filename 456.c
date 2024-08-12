#include<stdio.h>
int main()
{
	int x;

	for(x=10;x<=100;x+=10)
	{
		if(x%7==0)
		{
			goto label1;
		}
		printf("%d\n",x);
	}
	lable1:
	printf("%d is divided by 7",x);
	
	return 0;
}