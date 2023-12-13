#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *header=NULL;
void insert_at_front(int item)
{
	//for the fist node
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	if(header==NULL)
	{
		newnode->data=item;
		newnode->link=NULL;
	}
	//for the subsequent nodes
	else
	{
		newnode->link=header;
		newnode->data=item;
	}
	header=newnode;
}
void insert_at_end(int item)
{
	struct node *newnode,*ptr;
	newnode=(struct node*)malloc(sizeof(struct node));
	ptr=header;
	while(ptr->link!=NULL)
	{
		ptr=ptr->link;
	}
		ptr->link=newnode;
		newnode->link=NULL;
		newnode->data=item;

}
void traverse()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
}
int main()
{
	insert_at_front(10);
	insert_at_front(20);
	insert_at_end(30);
	insert_at_end(40);
	traverse();
	
}


