#include<stdio.h>
int main()
{
	int i,j,cho;
	printf("enter i and j: ");
	scanf("%d%d",&i,&j);
	printf("1. add");
	printf("\n2.sub");
	printf("\n3.product");
	printf("\n4.divine");
	printf("\n enter your choice: ");
	scanf("%d",&cho);
	switch(cho)
	{
		case 1:
		  printf("addition is :%d\n",i+j);
		  break;
		case 2:
		  printf("substraction is:%d\n",i-j);
		  break;
		case 3:
		  printf("product is:%d\n",i*j);
		  break;
		case 4:
		  printf("division is:%d\n",i/j);
		  break;
		default:
		  printf("wrong choice\n");
		  break;
	}
}