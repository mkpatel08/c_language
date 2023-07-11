#include<stdio.h>
int main()
{
	FILE *fp;
	//fp=fopen("e:/thispc/localdisk(e:)/mk patel/c language","+w");
	fp=fopen("mkpatel.txt","w+");
	fprintf(fp,"welcome to mkpatel file....\n");
	fputs("i am come to learning c language....\n",fp);
	fputs("we are enjoying here......",fp);
	fclose(fp);
}