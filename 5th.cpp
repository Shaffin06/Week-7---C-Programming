#include <stdio.h>
int fun2(int a,int b,int c,int n)
{
	if(n==1)
	return a;
	else if(n==2)
	return b;
	else if(n==3)
	return c;
	return fun2(a,b,c,n-1)+fun2(a,b,c,n-2)+fun2(a,b,c,n-3);
}
int main()
{
	int a,b,c;
	printf("Values of a, b and c: ");
	scanf("%d%d%d",&a,&b,&c);
	int n,x;
	printf("Enter value of n: ");
	scanf("%d",&n);
	x=fun2(a,b,c,n);
	printf("%d",x);
}
