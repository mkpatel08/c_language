#include<stdio.h>
int main()
{
	for(int i=0;i<15;i++)
	{
		if(i==15 || i==10 || i==2 || i==4 || i==5)
		{
			continue;
		}
	printf("\n%d",i);
	}
}