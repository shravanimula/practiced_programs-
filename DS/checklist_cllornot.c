#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct st{
	int data;
	struct st *link;
};
struct st *add(struct st *);
void display(struct st *);
bool cll_ornot(struct st *);
int main()
{
	struct st *head=NULL;
	int choice;
	while(1)
	{
		printf("1.add\t2.display\t3.check_list_cll_ornot\t4.exit\n");
		printf("enter ur choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add(head);
			       break;
			case 2:display(head);
			       break;
			case 3:if(cll_ornot(head))
				       printf("list is circular\n");
			       else 
				       printf("list is not circular\n");
			       break;
			case 4:exit(0);
		}
	}
}
struct st *add(struct st *ptr)
{
	struct st *newnode=NULL,*temp=NULL;
	newnode=malloc(sizeof(struct st));
	if(newnode==NULL)
	{
		printf("memory is not allocated\n");
	}
	else
	{
		printf("enter a data of st:\n");
		scanf("%d",&newnode->data);
		newnode->link=NULL;
		if(ptr==NULL)
		{
			ptr=newnode;
			//ptr->link=newnode;
		}
		else
		{
			temp=ptr;
			while(temp->link!=ptr)
			{
				temp=temp->link;
			}
			temp->link=newnode;
		}
		newnode->link=ptr;
	}
	return ptr;
}
void display(struct st *ptr)
{
	struct st *temp=NULL;
	if(ptr==NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		do{
			printf("%d\n",temp->data);
			temp=temp->link;
		}while(temp!=ptr);
	//	printf("%d\n",temp->data);
	}
}
bool cll_ornot(struct st *ptr)
{
	struct st *temp=NULL;
	if(ptr=NULL)
	{
		printf("list is empty\n");
	}
	else
	{
		temp=ptr;
		while(temp!=ptr)
		{
			temp=temp->link;
		}
		if(temp==ptr)
			return true;
		else
			return false;
	}
}
