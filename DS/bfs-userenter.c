#include<stdio.h>
#include<stdlib.h>
struct AdjList 
{
	int key;
	struct AdjList *next;
};
struct AdjList *Vtx[5];
int queuearr[25];
void enqueue();
int dequeue();
int temp,i,key;
int front=-1,rear=-1;
///Adjacency Matrix
//int graph[5][5]={{0,1,1,0,0},{1,0,0,1,1},{1,0,0,1,0},{1,0,1,0,1},{0,1,0,1,0}};
//visit array 0 rep. not visited and 1 rep. visited
int graph[5][5];
int visit[5]={0,0,0,0,0};
int V,E,E1,E2,type;

/*void getMatrix(int V)
{
	int i,j;
	printf("enter the vertices");
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			scanf("%d",&graph[i][j]);
		}
	}
}*/
void createList()
{
	struct AdjList *newnode,*ptr;
	//initialization
	for(i=0;i<V;i++)
	{
		Vtx[i]=NULL;
	}
		
	newnode=(struct AdjList*)malloc(sizeof(struct AdjList));
	newnode->key=E;
	newnode->next=NULL;
	if(Vtx[V]==NULL)
		Vtx[V]=newnode;
	else
	{
		ptr=Vtx[V];
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
	}
}
//adj matrix-user entering all vertex
void createMatrix()
{
	
	int i,j;
	int E1,E2;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			graph[i][j]=0;
		}
		printf("\n");
	}
	for(i=0;i<E;i++)
	{
		scanf("%d",&E1);
		scanf("%d",&E1);
		graph[E1][E2]=1;
		if(type==2)
			graph[E2][E1]=1;
	}		
}
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
		queuearr[rear]=key;
	}
	else
		printf("Queue is full");
	
}
int dequeue()
{
	int item;
	if(front==-1 || front>rear)
	{
		printf("No element to delete");
	}
	else
	{
		item=queuearr[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
		{
			front=front+1;
		}
		
		return(item);
	}
	
}
void display_graph()
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
	
	printf("Enter the number of Vertices:");
	scanf("%d",&V);
	//getMatrix(V);
	//printf("Enter the type of graph(enter 1 for directed 0r 2 for un directed graph):");
	//scanf("%d",&type);
	printf("Enter the number of edges:");
	scanf("%d",&E);
	///adjacency list
	printf("enter the edges:");
	for(i=0;i<E;i++)
	{
		scanf("%d",&E1);
		scanf("%d",&E1);
		createList();
		if(type==2)
			createList();
	}///	
	//createMatrix();
	
	printf("matrix representation is:\n");
	display_graph();
	printf("BFS traversal is: ");
	bfs(0);


	return(0);
}
