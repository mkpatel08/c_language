#include<stdio.h>
void setdata()
{
	int s,g,e;
	printf("enter science mark:");
	scanf("%d",&s);
	printf("enter gujarti mark:");
	scanf("%d",&g);
	printf("enter english mark:");
	scanf("%d",&e);
}
void calc()
{
	int s,g,e,t;
	float per;
	t = s+g+e;
	per=(float)t/3;
}
void display()
{
	int s,g,e,t;
	float per;
	printf("science\tgujarti\t\tenglish\t\ttotal\tper");
	printf("\n%d\t%d\t%d\t%d\t%f",s,g,e,t,per);
}
int main()
{
	setdata();
	calc();
	display();
}