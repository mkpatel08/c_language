#include<stdio.h>
struct bill
{
	int proudect;
	char name[30];
	float rate,qty,amt,dis,billant,gst,netbill;
};
int main()
{
	struct bill a[50];
	int i;
	for(i=0;i<2;i++)
	{
		printf("enter proudect: ");
		scanf("%d",&a[i].proudect);
		printf("enter name: ");
		scanf("%s",&a[i].name);
		printf("enter qty: ");
		scanf("%f",&a[i].qty);
		printf("enter rate: ");
		scanf("%f",&a[i].rate);
	}
	printf("proudect\tname\trate\t\tqty\tamt\t\tdic\tbillant\tgst\tnetbill");
	for(i=0;i<2;i++)
	{
		a[i].amt=a[i].qty*a[i].rate;
		a[i].dis=(a[i].amt*5)/100;
		a[i].billant=a[i].amt-a[i].dis;
		a[i].gst=(a[i].netbill*18)/100;
		a[i].netbill = a[i].billant+a[i].gst;
	printf("\n%d\t\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",a[i].proudect,a[i].name,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].billant,a[i].gst,a[i].netbill);
	}
}
