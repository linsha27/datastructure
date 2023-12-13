#include<stdio.h>
char setalpabets[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int search(char key)
{
	int i,count=0;
	for(i=0;i<26;i++)
	{
		if(setalpabets[i]==key)
		{
			break;	
		}
		count++;
	}
	return count;
}
int main()
{
 	char set1[26],set2[26];
	int bitset1[26],bitset2[2];
	int result,i,n,m,count;
	printf("Enter the size of first set:");
	scanf("%d",&m);
	printf("Enter the elments of first set:");
	for(i=0;i<m;i++)
	{
		scanf("%c",&set1[i]);
		
	}
	
	
	printf("Enter the size of second set:");
	scanf("%d",&n);
	printf("Enter the elments of second set:");
	for(i=0;i<n;i++)
	{
		scanf("%c",&set2[i]);
	}
	for(i=0;i<26;i++)
	{
		bitset1[i]=0;
		bitset2[i]=0;
	}
	for(i=0;i<m;i++)
	{
		count=search(set1[i]);
		bitset1[count]=1;
	}
	printf("Bit representation of set 1");
	for(i=0;i<26;i++)
	{
		printf("%d",bitset1[i]);
	}
