#include<stdio.h>
void sort(int a[i],b[j],int n,int m)
{
	int temp,i;
	for(i=0;i<n;i++)
	{
 		for(j=0;j<=m-1;j++)
		{
			if(a[i]>b[j])
			{
				temp=a[i];
				a[i]=b[j];
				b[j]=temp;
			}
		}
	}
	printf("sorted array");
		
int main()
{
	int a[10],b[10],c[20];
	int i,j,c,temp,m,n;
   	printf("Enter the size of first array ");
	scanf("%d",&n);
	printf("Enter the element of the first array ");
        for(i=0;i<=n;1++)
	{
		scanf("%d\n",a[i]);
	}
	printf("Enter the size of second array ");
	scanf("%d",&m);
	printf("Enter the element of the second array ");
        for(i=0;j<=m;1++)
	{
		scanf("%d\n",a[j]);
	}
    	return(0);
}
