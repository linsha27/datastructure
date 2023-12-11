#include<stdio.h>
#include<stdlib.h>
struct node
{
	int key;
	struct node *lchild;
	struct node *rchild;
};
struct node *root=NULL;
void insert(int item)
{
	struct node *newnode;
	struct node *ptr=root,*ptr1;
	int flag=0;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->lchild=NULL;
	newnode->key=item;
	newnode->rchild=NULL;
	while((ptr!=NULL)&&(flag==0))
	{

		if(item<ptr->key)
		{
			ptr1=ptr;
			ptr=ptr->lchild;
		
		}
		else if(item>ptr->key)
		{

			ptr1=ptr;
			ptr=ptr->rchild;
		}
		else
		{
			if(item==ptr->key)
			{
				flag=1;
				printf("failed");
			}
		}
	}


	if(root==NULL)
	{
		root=newnode;
	}
	else
	{
		if(flag!=1)
		{
			if(item<ptr1->key)
				ptr1->lchild=newnode;
			else
				ptr1->rchild=newnode;
		}
	}
}
void inorder(struct node *ptr)
{
	if(ptr!=NULL)
	{
		inorder(ptr->lchild);
		printf("%d ",ptr->key);
		inorder(ptr->rchild);
	}
}
void search(int item)
{
	struct node *ptr=root;
	int flag=0;
	while((ptr!=NULL)&&(flag==0))
	{

		if(item<ptr->key)
		{
			
			ptr=ptr->lchild;
		
		}
		else if(item>ptr->key)
		{

			
			ptr=ptr->rchild;
		}
		else
		{
			if(item==ptr->key)
			{
				flag=1;
				
			}
		}
	}
	if(flag==1)
		printf("\nkey found\n");
	else
		printf("\nkey not found\n");
	
}
struct node *minimum(struct node *ptr)
{
	while(ptr->lchild!=NULL)
		ptr=ptr->lchild;
	return(ptr);
}

struct node *successor(struct node *ptr)
{
	if(ptr->rchild!=NULL)
	{
		return(minimum(ptr->rchild));
	}
	else{
		return(ptr);
	}
}
void delete(int item)
{
	struct node *newnode;
	struct node *ptr=root,*ptr1;
	int flag=0;
	while((ptr!=NULL)&&(flag==0))
	{

		if(item<ptr->key)
		{
			ptr1=ptr;
			ptr=ptr->lchild;
		
		}
		else if(item>ptr->key)
		{

			ptr1=ptr;
			ptr=ptr->rchild;
		}
		else
		{
			if(item==ptr->key)
			{
				flag=1;
				
			}
		}
	}//CASE 1: NO CHILD NODES
	if((ptr->lchild==NULL)&&(ptr->rchild==NULL))
	{
		if(ptr==ptr1->lchild)
			ptr1->lchild=NULL;
		else
			ptr1->rchild=NULL;
		free(ptr);
	}
	else
	{
		//case 3:IF BOTH CHILD NODES EXITS
		if((ptr->lchild!=NULL)&&(ptr->rchild!=NULL))
		{
			int temp;
			struct node *succr;
			succr=successor(ptr);
			
			temp=succr->key;
			delete(temp);
			ptr->key=temp;

			
	
		}
		//CASE 2:IF NODE WITH NO CHILD
		else
		{
			if(ptr->rchild!=NULL)
			{
				int temp;
				temp=ptr->rchild->key;
				delete(temp);
				ptr->key=temp;
			}
			else
			{
				int temp;
				temp=ptr->lchild->key;
				delete(temp);
				ptr->key=temp;
			}

		}
	}

	
}

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	inorder(root);
	struct node *succr=successor(root);
	printf("\nsuccessor of root %d\n",succr->key);
	delete(1);
	inorder(root);
}


		
