#include<stdio.h>
int find_fact(int);
int main()
{
	int num,result;
	printf("enter a number:\n");
	scanf("%d",&num);
	result=find_fact(num);
	printf("factorial of number:%d\n",result);
}
int find_fact(int n)
{
	if(n==0)
		return 1;
	else
		return n*find_fact(n-1);
}
