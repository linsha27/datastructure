#include<stdio.h>
void modifyAry(int newAry[5],int index,int num)
{
   	newAry[index]=num;
}
int main()
{
	int ary[5]={10,20,30,40,50};
	for(int i=0;i<5;i++)
	{
		printf("%d\t",ary[i]);
	}
	modifyAry(ary,2,100);
	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("%d\t",ary[i]);
	}
	return(0);	
}
