#include<stdio.h>
int add(int arr[50],int limit)
{
    	int i,sum=0;
	for(i=0;i<limit;i++)
	{
 		sum=sum+arr[i];
         }
   	return(sum);
}
int main()
{
   	int a[50];
	int limit ,sum,i;
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
			sum=add(a,limit);
		
		}
	
	printf("sum of numbers are: %d\n",sum);
	}
	return(0);
}
	

	
