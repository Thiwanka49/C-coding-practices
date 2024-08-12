#include<stdio.h>
int main(void)
{
	int count=1,mark,sum=0,average=0;
	while(count<=10)
	{
		printf("Enter the mark");
		scanf("%d",&mark);
		count=count+1;
		sum=sum+mark;
	
		
	}
	average=sum/10;
	printf("average is =%d",average);
	return 0;
	
}
