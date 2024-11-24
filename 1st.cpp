#include <stdio.h>
void fun1(int a[], int x)
{
	int s=0,i;
	for(i=0;i<x;i++)
	s=s+a[i];
	printf("Average = %d",s/x);
	return;
}
int main()
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	fun1(a,n);
}
