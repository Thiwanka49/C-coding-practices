#include<stdio.h>
#define MAX 5

int main(void)
{
	int number[MAX],i,j,max=0,num_pos=0;
	printf("Input 5 integers :\n");
	for(i=0;i<MAX;i++)
	{
		scanf("%d",&number[i]);
	}
	for(j=0;j<MAX;j++)
	{
		if(number[j]>max)
		{
		max=number[j];
		num_pos=j;
	    }
	}
	printf("Highest value:%d\nposition:%d\n",max,num_pos+1);
	return 0;
}