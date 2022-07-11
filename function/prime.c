#include<stdio.h>
void check_prime(int);
void check_prime_range(int,int);
int main()
{
	int num,min,max;
	printf("enter a number:\n");
	scanf("%d",&num);
	check_prime(num);
	printf("enter a the minimum range of number:\n");
	scanf("%d",&min);
	printf("enter the maximum range of number:\n");
	scanf("%d",&max);
	check_prime_range(min,max);
}
void check_prime(int n)
{
	int i,flag;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
		else
			flag=1;
	}
	if(flag==1)
		printf("given number is prime :%d\n",n);
	else
		printf("given number is  not a prime:%d\n",n);
}
void check_prime_range(int min,int max)
{
	int i,j,cnt;
	for(i=min;i<=max;i++)
	{
		cnt=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				cnt++;
			}
		}
		if(cnt==2)
		printf("prime numbers:%d\n",i);
	}
}
