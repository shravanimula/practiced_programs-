#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a,b;
	printf("enter a number:\n");
	scanf("%d",&a);
	printf("enter b number:\n");
	scanf("%d",&b);
	printf("before swapping the elements are  a=%d\tb=%d\n",a,b);
	swap(&a,&b);
	printf("after swapping the elements are a=%d\tb=%d\n",a,b);
	void (*fp)(int *,int*)=swap;
	fp(&a,&b);
	printf("after swapping the elements are a=%d\tb=%d\n",a,b);

}
void swap(int *x,int *y)
{
	*x=(*x) ^ (*y);
	*y=(*x) ^ (*y);
	*x=(*x) ^ (*y);
}
