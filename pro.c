#include<stdio.h>
struct student{
	int rollno;
	char name[100];
	int h,s,e,t;
	float per;
};
int main()
{
	struct student a[5];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter rollno: ");
		scanf("%d",&a[i].rollno);
		printf("enter name: ");
		scanf("%s",&a[i].name);
		printf("enter hindi: ");
		scanf("%d",&a[i].h);
		printf("enter science: ");
		scanf("%d",&a[i].s);
		printf("enter english: ");
		scanf("%d",&a[i].e);	
	}
	printf("rollno\tname\thindi\tscience\tenglish\ttotal\tpercentage");
	for(i=0;i<3;i++)
	{
		a[i].t = a[i].h + a[i].s + a[i].e;
		a[i].per = (float)a[i].t /3;
		printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f",a[i].rollno,a[i].name,a[i].h,a[i].s,a[i].e,a[i].t,a[i].per);
	}
}