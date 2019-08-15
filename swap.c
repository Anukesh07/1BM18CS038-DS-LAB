#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("Enter the values of a and b\n");
	scanf("%d %d",&a,&b);
	printf("\n The values of a and b before swapping are %d and %d",a,b);
	swap(&a,&b);
	printf("\n The values of a and b after swapping are %d and %d",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int t=0;
	t=*x;
	*x=*y;
	*y=t;
}
