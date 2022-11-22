#include<stdio.h>
void add();
void sub();
void main()
{
	float area,radius,pi=3.14;
	printf("\n Enter a value of Radius = ");
	scanf("%f",&radius);
	
	area=pi*radius*radius;
	printf("\n Area of circle is = %.2f",area);
	add();

void add()
{
	int a,b,c;
	printf("\n Enter A = ");
	scanf("%d",&a);
	printf("\n Enter B = ");
	scanf("%d",&b);
	c=a+b;
	printf("\n Addition of Two Numbers is = %d",c);
}
void sub()
{
	int a,b,c;
	printf("\n Enter A = ");
	scanf("%d",&a);
	printf("\n Enter B = ");
	scanf("%d",&b);
	c=a-b;
	printf("\n Substraction of Two Numbers is = %d",c);
}	
}
