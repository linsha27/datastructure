#include<stdio.h>
char setalpabets[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int bitset1[26], bitset2[26], result[26];

void intialize(int set[26])
{
	for(int i=0;i<26;i++)
		set[i]=0;
}
int search(char letter)
{
	for(int i=0;i<26;i++)
	{
		if(setalpabets[i]==letter)
		{
			return i;	
		}
	}
}
int main()
{
 	char set1[26],set2[26];
	int result,i,n,m,j,indx;
	printf("Enter the size of first set:");
	scanf("%d",&n);
	printf("Enter the elments of first set:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&set1[i]);
		
	}
	for(i=0;i<n;i++)
	{
		printf("%c",set1[i]);
	}
	
	printf("Enter the size of second set:");
	scanf("%d",&m);
	printf("Enter the elments of second set:");
	for(i=0;i<m;i++)
	{
		scanf("%s",&set2[i]);
	}

	intialize(bitset1);
	for(j=0;j<26;j++)
	{
		indx = search(set1[j]);
		bitset1[indx] = 1;
		
	}

	for(i=0;i<26;i++)
	{
		printf("%d",bitset1[i]);
	}
	printf("\n");	
}

