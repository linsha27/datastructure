#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
	top=-1;
	printf("enter the size of stack:");
	scanf("%d",&n);
	printf("STACK OPERATIONS USING ARRAY:");
	printf("\n-----------------------------");
	printf("\n\t1.PUSH\n\t2.POP\n\t3.DISPLAY\n\t4.EXIT");
	do
	{
		printf("\nenter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:printf("----EXIT POINT-----");
				break;
			default:printf("please enter a valid choice(1/2/3/4)");
		}
	}
	while(choice!=4);
	return(0);
}
void push()
{
	if(top>=n-1)
	{
		printf("stack is overflow");
	}
	else
	{
           	printf("Enter a value to be pushed:");
		scanf("%d",&x);
		top++;	
		stack[top]=x;
	}	
}
void pop()
{
	if(top<=-1)
	{
		printf("stack is unerflow");
	}
	else
	{
           	printf("the deleted element is %d",stack[top]);
		
		top--;	
		
	}	
}
void display()
{
	if(top>=0)
	{
		printf("the elemets in the stack\n");
		for(i=top;i>=0;i--)
		{
			printf("\n%d",stack[i]);
			
	        }
		
	}
	else
	{
           	printf("the stack is empty");
			
		
	}	
}



			


			


