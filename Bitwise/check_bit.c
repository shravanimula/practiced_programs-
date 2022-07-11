#include<stdio.h>
int check_thebit(int,int);
int main()
{
	int num,pos,check;
	printf("enter a number:\n");
	scanf("%d",&num);
	printf("enter a position:\n");
	scanf("%d",&pos);
	check=check_thebit(num,pos);
	printf("set the bit given position:%d\n",check);
}
int check_thebit(int num,int p)
{
	int result;
	result=num |(1<<p);
	return result;
}
