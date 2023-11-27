#include<stdio.h>
void sort(int arr[],int x);
void display(int arr[],int x);
void merge(int m1[],int m2[],int x,int y);
int main()
{
 	int arr1[50],arr2[50],a1,a2,i;
	printf("Enter the size of first array: ");
	scanf("%d",&a1);
	printf("Enter the size of second array: ");
	scanf("%d",&a2);
	printf("Enter the elemets of first array: ");
	for(i=0;i<a1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the elemets of second array: ");
	for(i=0;i<a2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("\nThe elements of first array before sorting: ");
	display(arr1,a1);
	sort(arr1,a1);
	printf("\nThe elements of first array after sorting: ");
	display(arr1,a1);
	printf("\nThe elements of second array before sorting: ");
	display(arr2,a2);
	sort(arr2,a2);
	printf("\nThe elements of first array after sorting: ");
	display(arr2,a2);
	merge(arr1,arr2,a1,a2);
}
void display(int arr[],int x)
{
  	int i;
	for(i=0;i<x;i++)
	printf("%d ",arr[i]);
}
void sort(int arr[],int x)
{
 	int i,j,temp;
	for(i=0;i<x-1;i++)
	{
		for(j=0;j<x-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
 				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void merge(int m1[],int m2[],int x,int y)
{
	int m[100],i=0,j=0,k=0;
	while(i<x&&j<y)
	{
		if(m1[i]<m2[j])
		{
			m[k]=m1[i];
			i++;
			k++;
		}
		else
		{
			m[k]=m2[j];
			j++;
			k++;
		}

	}
	while(i<x)
	{
		
		m[k]=m1[i];
		i++;
		k++;
	}
	while(j<y)
	{
	
		m[k]=m2[j];
		j++;
		k++;
	}
	printf("\nThe elements of array after MERGING: ");
	display(m,x+y);
}
	

		
