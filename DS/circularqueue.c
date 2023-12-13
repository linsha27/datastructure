#include<stdio.h>
#include<stdlib.h>
#define MAX 4
int queue[MAX];
int front=-1;
int rear=-1;
void enqueue(int element)
{
	if((front==-1) && (rear==-1))
        {
 			front=0;
			rear=0;
			queue[rear]=element;
	}
	else if((rear+1)%MAX==front)
	{
		printf("Queue is overflow");
	}
	else
	{
		rear=(rear+1)%MAX;
		queue[rear]=element;
	}
}
int dequeue()
{
	if((front==-1)&&(rear==-1))
        {
 			printf("Queue is underflow");
	}
	else if(front==rear)
	{
		printf("The deleted element is %d",queue[front]);
		front=-1;
		rear=-1;
        }
	else
	{
		printf("The deleted element is %d",queue[front]);
		front=(front+1)%MAX;
		
	}
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		
		printf("\nQueue ELEMENTS ARE:");
		while(i!=rear)
		{
			printf("%d ",queue[i]);
			i=(i+1)%MAX;
		}
		printf("%d ",queue[i]);
	}
}

int main()
{
	int choice,x;
	
	printf("CIRCULAR QUEUE OPERATIONS USING ARRAY:");
	printf("\n-----------------------------");
	while(1)
	{
		printf("\n\t1.ENQUEUE\n\t2.DEQUEUE\n\t3.DISPLAY\n\t4.EXIT");
		printf("\nenter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter a value to be pushed:");
				scanf("%d",&x);
				enqueue(x);
				break;
				
			case 2:dequeue();
				break;
			case 3:display();
				break;
			case 4:exit(1);
				break;
			default:printf("please enter a valid choice(1/2/3/4)");
		}
	}
}

		
