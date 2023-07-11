#include<stdio.h>
int cl(int d)
{
	int i,n=0;
	for(i=1;i<d;i++)
	{
	if(d%i==0)
	{
		n=n+i;
		printf("\n%d",i);
	}	
	}	
	if(d==n)
	{
		printf("\n number is perfect",n);
	}
	else
	{
		printf("\n number is not perfect",n);
	}
}

int main()
{
	printf("\n welcome");
	int d;
	printf("\n enter d:");
	scanf("%d",&d);
	cl(d);
	printf("\n thankyou");
}