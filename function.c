#include<stdio.h>
/*void call(int a);//function declaration
int main()
{
	 call(100);//function call
	return 0;
}
void call(int a)	//function defination
{
	printf("a=%d",a);
}*/


/*
OPTION 2*/
//#include<stdio.h>


int main()
{
	void call(int a)//nested function
	{

	printf("a=%d",a);
	
	}
	 call(100);
	return 0;
}
/*
option 3;
#include<stdio.h>

void call(int a)//nested function
	{

	printf("a=%d",a);
	
	}
int main()
{
	
	 call(100);
	return 0;
}*/

