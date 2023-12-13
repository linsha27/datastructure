#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num=10;
	printf("The value num is:%d\n",num);
	printf("The address of num is:%p\n",&num);
	int *ptr;
  	ptr=&num;
	int *q;
	q=(int *)malloc(sizeof(int));
	*q=50;
	printf("The address of num is:%p\n",ptr);
	printf("The value of num is:%d through ponter",*ptr);
	printf("\nThe value of q is:%d\n",*q);
	printf("The address of q is:%p\n",q);
	return(0);
}
