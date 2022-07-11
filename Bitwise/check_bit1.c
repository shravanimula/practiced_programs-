#include<stdio.h>
int clear_thebit(int,int);
int toggle_thebit(int,int);
int main()
{
	int num,pos,check,check1;
	printf("enter a number:\n");
	scanf("%d",&num);
	printf("enter a position:\n");
	scanf("%d",&pos);
	check=clear_thebit(num,pos);
	printf("clear the bit given position:%d\n",check);
	check1=toggle_thebit(num,pos);
	printf("toggle the bit given position:%d\n",check1);
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
