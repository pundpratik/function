/*write a program to demonstrate all four categegories of function for volume of the cylinder(volume of cylinder 3.14*r*r*h)
a)function without parameter without return value.
b)function with parameter without return value
c)function without parameter with return value
d)function with parameter with return value,
*/
#include<stdio.h>
void cylinder()
{
	float vol,r,h,rr;
	printf("\n enter the radious and height of the cylinder");
	scanf("%f%f",&r,&h);
	rr=r*r;
	vol=3.14*rr*h;
	printf("\n  cylinder a volume=%f",vol);
}
void cylinderb(float r,float h)
{
	float rr,vol;
	rr=r*r;
	vol=3.14*rr*h;
	printf("\n  cylinder B volume=%f",vol);
}
float cylinderc()
{
	float vol,r,h,rr;
	printf("\n enter the radious and height of the cylinder");
	scanf("%f%f",&r,&h);
	rr=r*r;
	vol=3.14*rr*h;
	return printf("\n  culinder c volume=%f",vol);
}
float cylinderd(float r,float h)
{

	float vol,rr;
	rr=r*r;
	vol=3.14*rr*h;
	return printf("\n  cylinder d volume=%f",vol);
}
int main()
{
		float r,h;
			printf("\n enter the radious and height of the cylinder");
	scanf("%f%f",&r,&h);
		cylinder();
		cylinderb(r,h);
		cylinderc();
		cylinderd(r,h);
}
