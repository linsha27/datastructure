#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queuearr[MAX];
int front=-1,rear=-1,max1,item;
void enqueue();
void dequeue();
void display();
int main()
{
	int ch,item;
	printf("QUEUE OPERATIONS USING ARRAY:");
	printf("\n-----------------------------");
	while(1)
	{
		printf("\n\t1.ENQUEUE\n\t2.DEQUEUE\n\t3.DISPLAY\n\t4.EXIT");
		printf("\nenter the choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter a value to be inserted");
				scanf("%d",&item);
				enqueue(item);
				break;
				
			case 2:
				dequeue();
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
 void enqueue()
{ 
	
	if(rear==MAX-1)
	{
		printf("\nQueue overflow");
		return;
	}
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
	}
	else
	{
		rear++;
	}
	queuearr[rear]=item;
	printf("valued inserted");
}
void dequeue()
{
	int item;
	if(front==-1 || front>rear)
	{
  		printf("\nqueue underflow");
		return;
	}
	else
	{
		item=queuearr[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		{
			front=front+1;
		}
		printf("Value deleted:%d",item);
	}
}
void display()
{
    	int i;
	if(rear==-1)
	{
		printf("\nempty queue");
	}
	else
	{
    	
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queuearr[i]);
			
	        }
	}
}
		

			

