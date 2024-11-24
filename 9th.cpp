#include <stdio.h>
struct student
{
	int rno;
	char name[30];
	struct DOB
	{
		int d;
		int m;
		int y;
	}r2;
}s[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&s[i].rno);
		scanf("%[^\n]s",&s[i].name);
		scanf("%d",&s[i].r2.d);
		scanf("%d",&s[i].r2.m);
		scanf("%d",&s[i].r2.y);
	}
	for(i=0;i<3;i++)
	printf("%d",s[i]);
}
//Not Done 
