#include"stdio.h"
/*function is block of statement which perform the operation*/
void swapped(int *a, int *b)//passing the pointer parameter.
{
	int temp;				
	temp=*a;
	*a=*b;
	*b=temp;     //pointer a special type of variable which store store the address of another value at same time.
}
int main()
{
	int a, b;
	printf("\n enter any two value");
	scanf("%d%d",&a,&b);
	printf("\n before swapping a=%d and b=%d ",a,b);
	swapped(&a,&b);//call by adress
	printf("\n after swapping a=%d and b=%d ",a,b);
	return 0;
}
