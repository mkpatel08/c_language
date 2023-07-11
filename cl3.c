#include<stdio.h>
int amount(int n)
{
	int i,a[]={2000,500,200,100,50,20,10,5,2,1};
	for(i=0;i<10;i++)
	{
		if(n>=a[i])
		{
		printf("%d : %d\n",a[i],(n/a[i]));
		n=n%a[i];
		}
	}
}

int main()
{
	printf("\n welcome");
	int amt;
	printf("\n enter amount:");
	scanf("%d",&amt);
	amount(amt);
	printf("\n thankyou");
}