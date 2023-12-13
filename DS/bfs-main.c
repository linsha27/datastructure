#include<stdio.h>
#include<stdlib.h>
int queuearr[25];
//visit array 0 rep.no of visited
int visit[5]={0,0,0,0,0};
int front=-1,rear=-1,item;
//Adjacency Matrix
int graph[5][5]={{0,1,1,0,0},{1,0,0,1,1},{1,0,0,1,0},{1,0,1,0,1},{0,1,0,1,0}};
void enqueue();
int dequeue();
void display(); 
void enqueue(int key)
{ 
	
	if(rear<25)
	{
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
	}
	else{
		printf("Queue is full");
	}

}
int dequeue()
{
	int item;
	if(front==-1 || front>rear)
	{
  		printf("\nqueue underflow");
		
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
		return(item);
	}
	
}
void display()
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d ",graph[i][j]);
		}
		printf("\n");
	}
}
int isVisited(int Vtx)
{
	return(visit[Vtx]);
}

void bfs(int S)
{
	int Vtx;
	enqueue(S);
	while((front!=-1)&&(rear!=-1))
	{
		
		Vtx=dequeue();
		if(!isVisited(Vtx))
		{
			visit[Vtx]=1;
			printf("%d ",Vtx);
			for(int i=0;i<5;i++)
			{
				if(graph[Vtx][i]==1)
				  	enqueue(i);

			}
		}
	}
}
		
	
int main()
{
	display();
	printf("BFS traversal is: ");
	bfs(0);

	
}

