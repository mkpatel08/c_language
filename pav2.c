#include<stdio.h>
int main()
{
	int a[5] = {10,11,12,13,14,15};
	int i,*p;
	p=&a;
	for(i=0;i<5;i++)
	{
		printf("\n%d\t%u",*(p+i),(p+i));	
	}


}