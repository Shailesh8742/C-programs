#include<stdio.h>
void main()
{
	int s1,s2,s3,s4,s5,sum,avg,per;
	printf("\n Enter 5 Subject Marks = ");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	sum=s1+s2+s3+s4+s5;
	printf("\n sum=%d",sum);
	avg=sum/5;
	printf("\n avg=%d",avg);
	per=(sum*100)/500;
	printf("\n per=%d",per);
}
