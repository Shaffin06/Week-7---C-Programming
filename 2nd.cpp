#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n;
	printf("Enter number of elements in array: ");
	scanf("%d",&n);
	int *a;
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	int x=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>x)
		x=a[i];
	}
	printf("The largest element = %d",x);
	return 0;
}
