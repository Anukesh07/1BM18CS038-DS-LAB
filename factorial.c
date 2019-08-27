#include<stdio.h>
#include<string.h>
int factorial(int a)
{
	int x=1;
	if(a==1)
	{
		x=1;
	}
	else
	{
		x=a*factorial(a-1);
	}
	return x;
}
int main()
{
	int a;
	printf("Enter a positive number\n");
	scanf("%d",&a);
	printf("The factorial of %d is %d\n",a,factorial(a));
}
