#include<stdio.h>
int set_bit(int,int);
int main()
{
	int num,pos;
	printf("enter a number:\n");
	scanf("%d",&num);
	printf("enter a position:\n");
	scanf("%d",&pos);
	int (*fp)(int,int)=set_bit;
	printf("set the bit given number:%d\n",fp(num,pos));
}
int set_bit(int n,int p)
{
	int result;
	result=n|(1<<p);
	return result;
}
