#include<stdio.h>
int main()
{
	int min,max ,flag,i,check;
	printf("enter a minimum range number:\n");
	scanf("%d",&min);
	printf("enter a maximum range of number:\n");
	scanf("%d",&max);
	for(i=min;i<=max;i++)
	{
		check= i & 3;
		if(check==0)
		{
			flag=0;
		}
		else
		{
			flag=1;
		}
		if (flag==0)
		{
		printf("divisible of four:%d\n",i);
		}
	}
}
