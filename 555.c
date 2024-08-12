//initializing the elements of an array to zeros
#include<stdio.h>
int main(void)
{
	int n[5];//n is an array of 5 integers
	int i;//counter
	
	//intialize elements of array n to 0
	for(i=0;i<5;++i)
	n[i]=0;
	
	printf("%s%13s\n","Element","Value");
	
	//output contents of array n in a tabular format
	for(i=0;i<5;++i)
	
	printf("%7d%13d\n",i,n[i]);
	return 0;
}