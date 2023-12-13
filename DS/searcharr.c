#include<stdio.h>
void search(int arr[50],int limit,int kkey)
{	
	int i,location=1,flag=0;
	for(i=0;i<limit;i++)
	{
 		if(arr[i]!=kkey)
		{
			location=location+1;
		}	
			
		else
		{
			flag=1;
			break;
			    	
		}
			
	}
	if(flag==1)
 		printf("element is found at location %d ",location);
	else
		printf("element is not found");
	
   	
}
int main()
{
   	int a[50];
	int limit ,key,i;
	printf("Enter the limit of your array: ");
	scanf("%d",&limit);
	if(limit>50)
	printf("Please enter array size below 50\n");
	else
	{
		printf("Enter numbers: ");
		for(i=0;i<limit;i++)
		{
			scanf("%d",&a[i]);
			
		}
		printf("enter the element u want to search");
		scanf("%d",&key);
		search(a,limit,key);
		
	
	}
	return(0);
}
	

	
