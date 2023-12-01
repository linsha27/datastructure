#include<stdio.h>
int main()
{
	int a[50];
	int i,sum=0,limit;
	printf("Enter the limit of your array: ");
	scanf("%d",&limit);
	if(limit>=50 ||limit<=0)
	printf("Please enter array size below 50\n");
	else
	{
		printf("Enter numbers: ");
		for(i=0;i<limit;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
  	
	printf("sum of numbers are: %d\n",sum);
	}
	return(0);
}
	

	
