/*wap to print fibonacci series*/
#include<stdio.h>
int fibonacci(int num)
{
	int i,num1=0,num2=1,num3;
	for(i=2;i<=num;i++)
	{
		num3=num1+num2;
		printf("%d  ",num3);
		num1=num2;
		num2=num3;
			
	}
	return num3;
}
int main()
{
	int n;
	printf("\n enter any number");
	scanf("%d",&n);
	fibonacci(n);
	
	return 0;
}
