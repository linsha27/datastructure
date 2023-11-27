#include<stdio.h>
int n=0,q[10],size=4,rear=-1,front=-1;
void view()
{	
	int i;
	if(front<0)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("elements:");
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",q[i]);
		}
	}
}
int enqueue(int item)
{
	if(rear==size-1)
	{
		printf("Queue is full");
	}
	else
	{
		if(rear==-1)
		{
			rear=front=0;
			q[rear]=item;
		}
		else
		{
			rear=rear+1;
			q[rear]=item;
		}
		printf("Insertion completed");
	}
}
void dequeue()
{
	int item;
	if(front<0)
	{
		printf("Queue is empty");
	}
	else
	{
		if(front==rear)
		{
			item=q[front];
			printf("popped item is %d",item);
			front=rear=-1;
		}
		else
		{
			item=q[front];
			printf("popped item is %d",item);
			front=front+1;
		}
	}
}
int main()
{
	int item;
	printf("1.show the elements\n2.Enqueue\n3.Dequeue\n4.exit\n");
	while(n!=4)
	{
		printf("\nenter the operation:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:view();
			break;
			case 2:printf("enter the item:");
			scanf("%d",&item);
			enqueue(item);
			break;
			case 3:dequeue();
			break;
			case 4:printf("exiting....");
			break;
			default:("enter valid input(1,2,3 or 4)\n");
		}
	}
}

			
