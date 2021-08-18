/*wap to calculate factorial of a number using a function.(is recursive)
*/
#include<stdio.h>
int factorial(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
	
}
int main()
{
	int n;
	printf("\n enter any value");
	scanf("%d",&n);
	printf("\n factorial of %d =%d",n,factorial(n));
	return 0;
}
