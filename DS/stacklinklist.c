#include<stdio.h>
#include<stdlib.h>
#define max 3
int s=0;
struct node
{
	int data;
	struct node *link;
};
struct node *top=NULL;
void push(int item)
{
	struct node *new;
	new=(struct node*)malloc(sizeof(struct node));
	new->data=item;
	new->link=top;
	top=new;
	printf("%d inserted",new->data);
	
}
void pop()
{
	if(top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
		struct node *temp;
		temp=top;
		top=top->link;
		printf("%d is deleted item",temp->data);
		free(temp);
	}
}
void display()
{
	

	struct node *temp;
	temp=top;
	if(temp==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
	printf("\nEntered items are:\n");
	while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp=temp->link;
		}
		
	}
}

int main()
{
	int z,k,c,n;
	printf("STACK OPERATIONS USING LINKED LIST:");
	printf("\n-----------------------------");
	while(1)
	{
		
		printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT\n\t5.SEARCH");
		printf("\nenter the choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:if(s>=max)
				{
				printf("stack overflow");
}
	  			printf("Enter a value to be inserted");
				scanf("%d",&z);
				push(z);
				break;
				
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("please enter a valid choice(1/2/3/4)");
		}
	}
	
	
}		




		
	
			





