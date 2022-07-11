#include<stdio.h>
int clear_thebit(int,int);
int toggle_thebit(int,int);
int main()
{
	int num,pos;
	printf("enter a number:\n");
	scanf("%d",&num);
	printf("enter a position:\n");
	scanf("%d",&pos);
	int(*fp)(int,int)=clear_thebit;
	printf("clear the bit given position:%d\n",fp(num,pos));
	int(*fp1)(int,int)=toggle_thebit;
	printf("toggle the bit given position:%d\n",fp1(num,pos));
}
int clear_thebit(int n,int p)
{
	int result;
	result=n & (~(1<<p));
	return result;
}
int toggle_thebit(int n,int p)
{
	int result;
	result=n ^ (1<<p);
	return result;
}
