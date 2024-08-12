/*initializing the elements of an array using an initializer*/
#include<stdio.h>
int main(void)
{
	int n[5]={5,12,34,56,23};
	int i;
	printf("%s%13s\n","Element","Value");
	//output contents of array n in a tabular format
	for(i=0;i<5;++i)
	printf("%7%13d\n",i,n[i]);
	return 0;
}