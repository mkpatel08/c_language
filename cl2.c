#include<stdio.h>
int perfect()
{
	int r=0,n;  
	printf("\n enter value");
	scanf("%d",&n);
		while(n!=0)
		{
			r=r*10+n%10;
			n/=10;
		}
	printf("%d",r);
}
void main()
{
printf("\n welcome");
perfect();
printf("\n thankyou");	
}