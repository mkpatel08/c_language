#include<stdio.h>
int fibonacci(int i)
{
	if(i==0)
	{
		return 1;
	}
	if(i==1)
	{
		return 1;
	}
	else
	{
		return fibonacci(i-1)+fibonacci(i-2);
	}
}
int main()
{
	int n,i;
	printf("enter number");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("\n %d",fibonacci(i));	
	}
}