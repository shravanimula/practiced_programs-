#include<stdio.h>
#define SET(num,pos)  num|=(1<<pos)
int main()
{
	int result,num=10,pos=2;
	result=SET(num,pos);
	printf("set the bit of given position:%d\n",result);
}
