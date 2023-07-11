#include<stdio.h>
int main()
{
	int i=1,j;
	text:
	if(i<=5)
	{
		j=1;
		hello:
				if(j<=5)
				{
					printf("%d",j);
					j++;

				goto hello;
				}
	printf("\n");
	i++;
	goto text;
	} 
}