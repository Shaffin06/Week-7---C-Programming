#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n1,n2;
	printf("Enter number of elements in array 1: ");
	scanf("%d",&n1);
	int *a;
	a=(int*)malloc(n1*sizeof(int));
	printf("Enter elements of array 1: ");
	for(i=0;i<n1;i++)
	scanf("%d",&a[i]);
	printf("Enter number of elements in array 2: ");
	scanf("%d",&n2);
	int *b;
	b=(int*)malloc(n1*sizeof(int));
	printf("Enter elements of array 2: ");
	for(i=0;i<n2;i++)
	scanf("%d",&b[i]);
	int *c;
	c=(int*)malloc((n1+n2)*sizeof(int));
	for(i=0;i<n1;i++)
	c[i]=a[i];
	for(i=0;i<n2;i++)
	c[n1+i]=b[i];
	printf("Combined Array:\n");
	for(i=0;i<n1+n2;i++)
	printf("%d\t",c[i]);
	return 0;
}
	
	
