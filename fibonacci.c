#include<stdio.h>
#include<string.h>
int fibonacci(int a)
{
	int x=0;
	if(a==1)
	{
		x=0;
	}
	else
	{
		if(a==2)
		{
			x=1;
		}
		else
		{
			x=fibonacci(a-1)+fibonacci(a-2);
		}	
	}
	return x;
}
int main()
{
	int a;
	printf("Enter a number\n");
	scanf("%d",&a);
	printf("The %dth number in fibonacci series is %d\n",a,fibonacci(a+1));
}

