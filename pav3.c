#include<stdio.h>
int main()
{
	int i,j,*p,*q;
	printf("enter value of i: ");
	scanf("%d",&i);
	printf("enter value of j: ");
	scanf("%d",&j);
	p=&i;
	q=&j;
        *p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;                                                
	printf("value of i is:%d",*p);
	printf("\nvalue of j is:%d",*q);

}