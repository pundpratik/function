#include<stdio.h>
void fun(int a)
{
	printf("\n a=%d ",a);
	a=200;//a=200 is not print because any change in formal arg/ param is not reflected back in the	actual arg.
}

int main()
{
		int a=100;
		fun(a);
		printf("\n a=%d",a);
		return 0;
}
